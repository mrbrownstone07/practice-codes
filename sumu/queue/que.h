#ifndef QUE_H_INCLUDED
#define QUE_H_INCLUDED

class FullQueue{};
class EmptyQueue{};

template <class ItemType>
class Que{

    public:
        Que();
        Que(int max);
        // ~Que();
        void MakeEmpty();
        bool IsEmpty();
        bool IsFull();
        void Enqueue(ItemType);
        void Dequeue(ItemType&);

    private:
        int front, rear, maxQue;
        ItemType *items;
};

#endif // QUE_H_INCLUDED