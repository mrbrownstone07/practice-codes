#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED


template <class T>
class ArrayStack
{
    public:
        ArrayStack(int);
        void push(T);
        T pop();
        T peek();
        bool isEmpty();
        int stackSize();
    protected:

    private:
        T *data;
        int top = -1;
        int capacity;
        
};

#endif // STACK_H