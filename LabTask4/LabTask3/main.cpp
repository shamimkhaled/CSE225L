#include "dynArr.h"
#include <iostream>

using namespace std;

int main()
{
    int row, col;
    int arr_input;
    dynArr d1();
    dynArr d2(5, 5);

    cout << "To specify the number of rows and columns of two dimensional array: ";
    cin >> row >> col;
    d2.allocate(row, col);

    cout << "Enter the array input: " << endl;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> arr_input;
            d2.setValue(i, j, arr_input);
        }
    }

    cout << "Output: " << endl;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << d2.getValue(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}
