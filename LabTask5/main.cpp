#include <iostream>
#include "unsortedtype.cpp"
#include "studentInfo.h"
using namespace std;

template <class S>
void printItems(UnsortedType<S> unsorted)
{

    int len = unsorted.LengthIs();
    S value;
    for(int i=0; i<len; i++)
    {
        unsorted.GetNextItem(value);
        cout << value << " ";
    }
    cout << endl;
}
template <class S>
void retrieve(UnsortedType<S> unsorted, S value)
{
    bool found;
    unsorted.RetrieveItem(value, found);
    if(found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

}
void checkFull(bool found)
{
    if(found)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;
}

int main()
{

    UnsortedType<int> unsortedtype;
    unsortedtype.InsertItem(5);
    unsortedtype.InsertItem(7);
    unsortedtype.InsertItem(6);
    unsortedtype.InsertItem(9);
    printItems(unsortedtype);

    cout << unsortedtype.LengthIs() << endl;
    unsortedtype.InsertItem(1);
    printItems(unsortedtype);

    retrieve(unsortedtype, 4);
    retrieve(unsortedtype, 5);
    retrieve(unsortedtype, 9);
    retrieve(unsortedtype, 10);

    checkFull(unsortedtype.IsFull());
    unsortedtype.DeleteItem(5);
    checkFull(unsortedtype.IsFull());
    unsortedtype.DeleteItem(1);
    printItems(unsortedtype);
    unsortedtype.DeleteItem(6);
    printItems(unsortedtype);

    cout << "------------------------------" << endl;
    cout << "StudentInfo class output:" << endl;
    cout << "------------------------------" << endl;

    studentInfo student1(15234,"Jon",2.6);
    studentInfo student2(13732,"Tyrion",3.9);
    studentInfo student3(13569,"Sandor",1.2);
    studentInfo student4(15467,"Ramsey2",3.1);
    studentInfo student5(16285,"Arya",3.1);

    UnsortedType<studentInfo> unsort;
    unsort.InsertItem(student1);
    unsort.InsertItem(student2);
    unsort.InsertItem(student3);
    unsort.InsertItem(student4);
    unsort.InsertItem(student5);


    studentInfo student = 15467;
    unsort.DeleteItem(student);
    student = 13569;
    retrieve(unsort, student);
    printItems(unsort);

    return 0;
}
