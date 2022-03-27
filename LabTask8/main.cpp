//SHAMIM MIAH 1813597642
#include <iostream>
#include "sortedtype.cpp"
#include "timeStamp.h"

using namespace std;

template <class S>
void printItems(SortedType<S> sorted)
{
    int len = sorted.LengthIs();
    S value;
    for(int i=0; i<len; i++)
    {
        sorted.GetNextItem(value);
        cout << value << endl;
    }

}
int main()
{

    SortedType<timeStamp> sort;

    timeStamp t1(15,34,23);
    timeStamp t2(13,13,02);
    timeStamp t3(43,45,12);
    timeStamp t4(25,36,17);
    timeStamp t5(52,02,20);

    sort.InsertItem(t1);
    sort.InsertItem(t2);
    sort.InsertItem(t3);
    sort.InsertItem(t4);
    sort.InsertItem(t5);
    printItems(sort);

    timeStamp time(25,36,17);
    sort.DeleteItem(time);
    printItems(sort);

    return 0;
}
