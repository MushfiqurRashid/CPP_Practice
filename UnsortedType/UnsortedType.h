#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

const int MAX_ITEM = 5;

template<class ItemType> class UnsortedType{
public:
    UnsortedType();
    void MakeEmpty;
    bool IsFool;
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&,bool&);
    void ResetList();
    void GetNextItem(ItemType&);

private:
    int length;
    ItemType info[MAX_ITEM];
    int currentPOs;
}

#endif // UNSORTEDTYPE_H_INCLUDED
