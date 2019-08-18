#include "stacktype.cpp"
#include <iostream>
using namespace std;

void checkBalParen(){
    string str;
    cout << "Enter: ";
    getline(cin, str);
    bool pushed = false;
    StackType<char> b;
    
    for(int i = 0; i <= str.length(); i++){
        if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
            b.Push(str[i]);
            pushed = true;
        }

        if(!b.IsEmpty()){
            if(str[i] == ')'){
                if(b.Top() == '('){
                    b.Pop();
                }
                else break;
            }
            if(str[i] == ']'){
                if(b.Top() == '['){
                    b.Pop();
                }
                else break;
            }
            if(str[i] == '}'){
                if(b.Top() == '{'){
                    b.Pop();
                }
                else break;
            }                        
        }
    }

    cout << ( (b.IsEmpty() && pushed) ? "YES" : "NO" ) << "\n";

    while(!b.IsEmpty()){
        cout << b.Top() << "\n";
        b.Pop();
    }
}

int main(){
    StackType<int> s;

    //checking if the stack is empty
    cout << "Stack is " <<(s.IsEmpty() ? "Not Empty" : "Empty") << "\n";

    //pushing four ints
    s.Push(5); s.Push(7); s.Push(4); s.Push(2);

    //checking if the stack is empty
    cout << "Stack is " <<(s.IsEmpty() ? "Not Empty" : "Empty") << "\n";

    //checking if the stack is full
    cout << "Stack is " <<(s.IsFull() ? "Full" : "Not Full") << "\n";

    //printing values in the order they are given
    StackType<int> temp;
    while(!s.IsEmpty()){
        temp.Push(s.Top());
        s.Pop();
    }

    while(!temp.IsEmpty()){
        cout << temp.Top() << " ";
        s.Push(temp.Top());
        temp.Pop();
    }cout << "\n";

    //pushing another item
    s.Push(3);

    //printing values in the order they are given
    while(!s.IsEmpty()){
        temp.Push(s.Top());
        s.Pop();
    }

    while(!temp.IsEmpty()){
        cout << temp.Top() << " ";
        s.Push(temp.Top());
        temp.Pop();
    }cout << "\n";

    //checking if the stack is full
    cout << "Stack is " <<(s.IsFull() ? "Full" : "Not Full") << "\n";

    s.Pop(); s.Pop();

    cout << s.Top() << "\n";

    checkBalParen();


}