#include <iostream>
#include "linkedStack.h"

using namespace std;

template <class T>
LinkedStack <T>::LinkedStack(){
    top = NULL;
}

template <class T>
bool LinkedStack <T>::isEmpty(){
    return (!top);
}

template <class T>
void LinkedStack <T>::push(T element){
    struct node *newNode;
    newNode = new node;

    newNode->data = element;
    newNode->next = top;
    top = newNode;
}

template <class T>
T LinkedStack <T>::pop(){
    if(isEmpty()) {
        cout << "stack is empty" << endl;
    }

    struct node *temp;
    temp = top;
    top = top->next;
    return temp->data;
}

template <class T>
T LinkedStack <T>::peek(){
    return top->data;
}

template <class T>
int LinkedStack <T>::stackSize(){
    return top;
}


