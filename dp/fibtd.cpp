#include <iostream>
using namespace std;

const int SIZE = 100;
long long F[SIZE];

void genmap(){
    F[0] = 0; F[1] = 1; F[2] = 1; F[3] = 2;
    for(int i = 4; i <= SIZE; i++) F[i] = 0;
}

long long fib(int n){
    if (n == 0) return F[0];
    else if (n == 1) return F[1];
    else if (n == 2) return F[2];
    else if (n == 3) return F[3];

    else if(F[n-1] != 0) return F[n] = F[n-1] + F[n-2];
    
    else if(F[n-1] == 0 && F[n-2] != 0){
        long long nF = fib(n-1);
        F[n-1] = nF;
        return F[n] = F[n-1] + F[n-2];
    }
    
    else return F[n] = fib(n-1) + fib(n-2);
}

int main(){
    genmap();
    
    int i;
    cin >> i;
    cout << fib(i) << "\n";    
}