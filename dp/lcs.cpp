#include <iostream>
#include <stack>
using namespace std;

int **M;
int l1, l2;

int max(int a, int b){ return a > b ? a : b; }

void freeMem(){
    for(int i = 0; i <= l1; i++)
        delete [] M[i];
    delete [] M;
}

void generateMap(string s1, string s2){
    l1 = s1.length(); l2 = s2.length();

    M = new int*[l1+1];
    for(int i = 0; i <= l1; i++)
        M[i] = new int[l2+1];


    for(int i = 0; i <= l1; i++)
        for(int j = 0; j <= l2; j++)
            if(i == 0 || j == 0) M[i][j] = 0;
            else if(s1[i-1] == s2[j-1]) M[i][j] = M[i-1][j-1] + 1;
            else M[i][j] = max(M[i-1][j], M[i][j-1]);        
}

void lcs(string s1, string s2){
    generateMap(s1,s2);
    stack <char> out;
    for(int r = l1, c = l2; r >= 0 && c >= 0; ){
        if(s1[r - 1] == s2[c-1]){
            out.push(s1[r-1]);
            r--; c--;
        }
        else M[r-1][c] > M[r][c-1] ? r-- : c--;
    }

    while (!out.empty()){cout << out.top(); out.pop();}
    cout << ", " << M[l1][l2] << "\n";

    freeMem();
}

int main(){
    string s1, s2;

    getline(cin, s1);
    getline(cin, s2);

    lcs(s1, s2);
}