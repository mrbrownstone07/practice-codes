#include "stack.cpp"
#include <iostream>
using namespace std;

int main(){
    ArrayStack<int> s(10);

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);


    int len = s.stackSize();
    for(int i = 0; i <= len; i++){
        cout << s.pop() << endl;
    }

    s.pop();
}