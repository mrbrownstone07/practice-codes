#include <iostream>
using namespace std;

const int MAX_ITEMS = 5;

class FullStack {};
class EmptyStack {};

template <class ItemType>
class StackType{
    
    public:
        StackType();
        bool IsFull();
        bool IsEmpty();
        void Push(ItemType newItem);
        void Pop();
        ItemType Top();

    private:
        int top;
        ItemType items [MAX_ITEMS];
};

template <class ItemType>
StackType<ItemType>::StackType(){
    top = -1;
}

template <class ItemType>
bool StackType<ItemType>::IsEmpty(){
    return (top == -1);
}

template <class ItemType>
bool StackType<ItemType>::IsFull(){
    return (top == MAX_ITEMS-1);
}

template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem){
    if( IsFull() ) throw FullStack();
    items[++top] = newItem;
}

template <class ItemType>
void StackType<ItemType>::Pop(){
    if( IsEmpty() ) throw EmptyStack();
    top--;
}

template <class ItemType>
ItemType StackType<ItemType>::Top(){
    if( IsEmpty() ) throw EmptyStack();
    return items[top];
}