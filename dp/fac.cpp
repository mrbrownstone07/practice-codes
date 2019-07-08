#include <iostream>
using namespace std;

long long M[1000];
long long m[1000]; 

void seed(){M[0] = 1;m[0] = 1;}

//bottom up solution
long long facBottomUp(int n){  
    for(int i = 1; i <= n; i++) M[i] = i * M[i-1]; 
    return M[n];
}

//top down solution
long long facTopDown(int n){ return (n == 0) ? m[0] : m[n] = n * facTopDown(n-1);}

int main(){
    int n;
    cin >> n;

    cout << facBottomUp(n) << endl;
    cout << facTopDown(n) << endl;
}   