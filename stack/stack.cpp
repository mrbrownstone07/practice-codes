#include "stack.h"
#include <iostream>
using namespace std;

template <class T>
ArrayStack <T>::ArrayStack(int s){
    capacity = s;
    data = new int [s];
}

template <class T>
bool ArrayStack <T>::isEmpty(){
    return (top < 0);
}

template <class T>
void ArrayStack <T>::push(T element){
    //cout << "pushing " << element << endl;
    if(top >= capacity) cout << "overflow" << endl;
    else data[++top] = element;
}

template <class T>
T ArrayStack <T>::pop(){
    if(isEmpty()) cout << "stack is empty" << endl;
    return data[top--];
}

template <class T>
T ArrayStack <T>::peek(){
    if(isEmpty()) cout << "stack is empty" << endl;
    return data[top];
}

template <class T>
int ArrayStack <T>::stackSize(){
    return top;
}


