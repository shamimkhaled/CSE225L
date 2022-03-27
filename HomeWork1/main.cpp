#include "dynArr.h"
#include <iostream>
#include "dynarr.cpp"
using namespace std;

int main()
{
    int m = 3;
    int n = 3;
    int arr_input;
    dynArr<int> arr1 = dynArr<int>();
    dynArr<int> arr2 = dynArr<int>(m, n);

    cout << "Enter the array input: " << endl;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr_input;
            arr2.setValue(i, j, arr_input);
        }
    }

    cout << "Output: " << endl;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << arr2.getValue(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}
