#include "linkedStack.cpp"
#include <iostream>
using namespace std;

int main(){
    LinkedStack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    for(int i = 0; i <= 4; i++){
        cout << s.pop() << endl;
    }
}