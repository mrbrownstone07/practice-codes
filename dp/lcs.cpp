#include <iostream>
using namespace std;

int max(int a, int b){
    if(a > b) return a;
    return b;
}

void lcs(string s1, string s2, string &R, int &len){
    int s1Len, s2Len;
    
    s1Len = s1.length();
    s2Len = s2.length();

    int map[s1Len + 1] [s2Len + 1];
    string temp = "";

    for(int i = 0; i <= s1Len; i++)
        for(int j = 0; j <= s2Len; j++)
            if(i == 0 || j == 0) map[i][j] = 0;
            else if(s1[i-1] == s2[j-1]) {
                map[i][j] = map[i-1][j-1] + 1;
                temp += s2[j-1];
            }
            else map[i][j] = max(map[i-1][j], map[i][j-1]);

    len = map[s1Len][s2Len];
    R = temp; 
}

int main(){
    string s1, s2, R;
    int len;

    getline(cin, s1);
    getline(cin, s2);

    lcs(s1, s2, R, len);

    cout << len << "\n" << R << "\n";
}