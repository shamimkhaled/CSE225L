#include "dynArr.h"
#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int arr_size, arr_input;

    dynArr arr1 = dynArr();
    dynArr arr2 = dynArr(n);

    cout << "To change the size of the array: ";
    cin >> arr_size;

    if(arr_size > n)
    {
        arr2.allocate(arr_size);
    }
    else
    {
        cout << "you can't change array size because size is below or equal 5.";
        return 0;
    }

    cout << "Enter the array input: ";

    for(int i=0; i<arr_size; i++)
    {
        cin >> arr_input;
        arr2.setValue(i,arr_input);
    }

    cout << "Output: ";

    for(int j=0; j<arr_size; j++)
    {
        cout << arr2.getValue(j) << " ";
    }
    return 0;
}
