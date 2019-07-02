#include <iostream>
using namespace std;

const int SIZE = 100;
long long F[SIZE];

void seed(){
    F[0] = 0; F[1] = 1; F[2] = 1; F[3] = 2;
    for(int i=4; i<=SIZE; i++) F[i] = 0;
}

long long fac(int n){
    seed();
    for(int i=3; i<=n; i++) F[i] = F[i-1] + F[i-2];
    return F[n];
}

int main(){
    int n;
    cin >> n;
    cout << fac(n) << "\n";     
}