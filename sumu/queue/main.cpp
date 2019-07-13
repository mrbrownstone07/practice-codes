#include <iostream>
#include "que.cpp"

using namespace std;

template <class T>
void printQue(Que<T> &q){
    Que <T> temp(5);
    int t;

    while(!q.IsEmpty()){
        q.Dequeue(t);
        temp.Enqueue(t);
        cout << t << " ";
    } cout  << "\n";

    while (!temp.IsEmpty()){
        temp.Dequeue(t);
        q.Enqueue(t);
    }
}

template <class T>
void checkIfEmpty(Que<T> &q){cout << (q.IsEmpty() ? "Queue is Empty\n" : "Queue is not Empty\n");}

template<class T>
void checkIfFull(Que<T> &q){cout << (q.IsFull() ? "Queue is Full\n" : "Queue is not Full\n");}

void printBinaryNumber(int n){
    Que<int> q;
    q.Enqueue(1);
    while(n > 0){
        int preValue, newValue;
        q.Dequeue(preValue);
        cout << preValue << "\n";
        
        preValue *= 10;
        newValue = preValue + 1;

        q.Enqueue(preValue);
        q.Enqueue(newValue);
        n--;
    }
} 

int main(){
    Que <int> q(5);

    checkIfEmpty(q);

    q.Enqueue(5); q.Enqueue(7); q.Enqueue(4); q.Enqueue(2);

    checkIfEmpty(q);

    checkIfFull(q);

    q.Enqueue(6);

    printQue(q);

    checkIfFull(q);
    
    try{ q.Enqueue(8); }
    catch(FullQueue e){
        cout << "Queue Overflow\n"; 
    }
    
    int t;
    q.Dequeue(t); q.Dequeue(t);
    printQue(q);

    q.Dequeue(t); q.Dequeue(t); q.Dequeue(t);
    checkIfEmpty(q);

    try{ q.Dequeue(t); }
    catch(EmptyQueue e){
        cout << "Queue UnderFlow\n";
    }

    int bound;
    cin >> bound;
    cout << "\n";
    printBinaryNumber(bound);
}