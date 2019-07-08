#ifndef SORTEDTYPE_H
#define SORTEDTYPE_H

const int MAX_ITEMS = 5;
template <class ItemType>

class Sortedtype
{
    public:
        Sortedtype();
        void MakeEmpty();
        bool IsFull();
        int LengthIs();
        void InsertItem (ItemType);
        void DeleteItem (ItemType);
        void RetrieveItem (ItemType&, bool&);
        void ResetList();
        void GetNextItem (ItemType&);
    protected:
    private:
        int length;
        ItemType info [MAX_ITEMS];
        int currentPos;
};

#endif // SORTEDTYPE_H
