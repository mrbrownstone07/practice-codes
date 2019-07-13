#include "que.h"

template <class ItemType>
Que<ItemType>::Que(int max){
    maxQue = max +1;
    front = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];
}

template <class ItemType>
Que<ItemType>::Que(){
    maxQue = 501;
    front = maxQue - 1;
    rear = maxQue - 1;
    items = new ItemType[maxQue];
}

// template <class ItemType>
// Que<ItemType>::~Que(){
//     delete [] items;
// }

template <class ItemType>
void Que<ItemType>::MakeEmpty(){
    front = maxQue - 1;
    rear = maxQue - 1;
}

template <class ItemType>
bool Que<ItemType>::IsEmpty(){
    return (rear == front);
}

template <class ItemType>
bool Que<ItemType>::IsFull(){
    return ((rear + 1) % maxQue == front);
}

template <class ItemType>
void Que<ItemType>::Enqueue(ItemType newItem){
    if(IsFull()) throw FullQueue();

    else{
        rear = (rear + 1) % maxQue;
        items[rear] = newItem;
    }
}

template <class ItemType>
void Que<ItemType>::Dequeue(ItemType &item){
    if(IsEmpty()) throw EmptyQueue();

    else{
        front = (front + 1) % maxQue;
        item = items[front];
    }
}