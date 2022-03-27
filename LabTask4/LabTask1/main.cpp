#include "dynArr.h"
#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int array_input;
    dynArr arr1 = dynArr();
    dynArr arr2 = dynArr(n);

    cout << "Enter the array input: ";

    for(int i=0; i<n; i++)
    {
        cin >> array_input;
        arr2.setValue(i, array_input);
    }

    cout << "Output: ";

    for(int j=0; j<n; j++)
    {
        cout << arr2.getValue(j) << " ";
    }
    return 0;
}
