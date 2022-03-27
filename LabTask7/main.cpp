//SHAMIM MIAH - 1813597642
#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main()
{
    UnsortedType<int> list, list1;
    UnsortedType<int>  sort;

    int m, n, input;
    cout << "Enter the input size in the first sequence: ";
    cin >> m;

    cout << "Enter the elements in the first sequence: ";
    for(int i=0; i<m; i++)
    {
        cin >> input;
        list.InsertItem(input);
    }

    cout << "Enter the input size in the second sequence: ";
    cin >> n;

    cout << "Enter the elements in the second sequence: ";
    for(int i=0; i<n; i++)
    {
        cin >> input;
        list1.InsertItem(input);
    }


    int value, value1, index, index1;
    index=list.LengthIs();
    index1=list1.LengthIs();

    list.GetNextItem(value);
    list1.GetNextItem(value1);

    while(index>0 && index1>0)
    {
        if(value>value1)
        {
            sort.InsertItem(value);
            index--;
            if(index>0)
                list.GetNextItem(value);
        }
        else if(value1>value)
        {
            sort.InsertItem(value1);
            index1--;
            if(index1>0)
                list1.GetNextItem(value1);
        }
        else
        {
            sort.InsertItem(value);
            sort.InsertItem(value1);
            index--;
            index1--;
            if(index>0)
                list.GetNextItem(value);
            if(index1>0)
                list1.GetNextItem(value1);
        }
    }

    while(index>0)
    {
        sort.InsertItem(value);
        index--;
        if(index>0)
            list.GetNextItem(value);
    }

    while(index1>0)
    {
        sort.InsertItem(value1);
        index1--;
        if(index1>0)
            list1.GetNextItem(value1);
    }

    int value_sort, index_sort = sort.LengthIs()-1;
    while(index_sort>=0)
    {
        sort.GetNextItem(value_sort);
        cout << value_sort << ' ';
        index_sort--;
    }
    cout << endl;

    return 0;
}
