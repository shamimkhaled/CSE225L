//SHAMIM MIAH 1813597642
#include <iostream>
#include "sortedtype.cpp"
#include "timeStamp.h"

using namespace std;

template <class S>
void printItems(SortedType<S> st)
{

    int len = st.LengthIs();
    S value;
    for(int i=0; i<len; i++)
    {
        st.GetNextItem(value);
        cout << value << " ";
    }
    cout << endl;
}
template <class S>
void retrieve(SortedType<S> st, S value)
{
    bool found;
    st.RetrieveItem(value, found);
    if(found){
        cout << "Item is found" << endl;
    }
    else{
        cout << "Item is not found" << endl;
    }

}
void checkFull(bool found)
{
    if(found){
        cout << "List is full" << endl;
    }
    else{
        cout << "List is not full" << endl;
    }
}

int main()
{

    SortedType<int> sortedType;
    cout << sortedType.LengthIs() << endl;

    sortedType.InsertItem(5);
    sortedType.InsertItem(7);
    sortedType.InsertItem(4);
    sortedType.InsertItem(2);
    sortedType.InsertItem(1);
    printItems(sortedType);

    retrieve(sortedType, 6);
    retrieve(sortedType, 5);

    checkFull(sortedType.IsFull());
    sortedType.DeleteItem(1);

    printItems(sortedType);
    checkFull(sortedType.IsFull());

    cout << "---------------------------------------" << endl;
    cout << "---------------------------------------" << endl;

    SortedType<timeStamp> sorted;
    timeStamp t1(15,34,23);
    timeStamp t2(13,13,02);
    timeStamp t3(43,45,12);
    timeStamp t4(25,36,17);
    timeStamp t5(52,02,20);

    sorted.InsertItem(t1);
    sorted.InsertItem(t2);
    sorted.InsertItem(t3);
    sorted.InsertItem(t4);
    sorted.InsertItem(t5);
    //printItems(sorted);

    timeStamp temp(25,36,17);
    sorted.DeleteItem(temp);

    printItems(sorted);


    return 0;
}
