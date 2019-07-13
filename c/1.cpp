#include <iostream>
using namespace std;

bool palinR(string str, int s, int e){
    return (e == s ? true : (str[s] != str[e] ? false : (s < e +1 ? palinR(str, s+1, e-1) : true))); 
}

bool isPalin(string str){ return palinR(str, 0, str.length()-1); }

int main(){
    string str;
    getline(cin, str);
    cout << (isPalin(str) ? "palin" : "not") << endl;
}