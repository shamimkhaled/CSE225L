#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the two dimensional array size  [rows] [cols] :";
    cin >> rows;

    int arrCol[rows];
    int** ptr = new int* [rows];

    cout << "size (all of the rows are not the same size):  ";
    for(int i=0; i<rows; i++)
    {
        cin >> cols;
        ptr[i] = new int[cols];
        arrCol[i] = cols;
    }

    cout << "Enter the two dimensional array input: " <<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<arrCol[i]; j++)
        {
            cin >> ptr[i][j];
        }
    }

    cout << "Output: " << endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<arrCol[i]; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    delete [] ptr;

    return 0;
}
