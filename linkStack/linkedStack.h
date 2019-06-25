#ifndef LINKEDSTACK_H_INCLUDED
#define LINKEDSTACK_H_INCLUDED



template <class T>
class LinkedStack
{

    struct node
    {
        T data;
        struct node *next;
    };
    
    public:
        LinkedStack();
        void push(T);
        T pop();
        T peek();
        bool isEmpty();
        int stackSize();
    protected:

    private:
       struct node *top;
        
        
};

#endif // LINKEDSTACK_H