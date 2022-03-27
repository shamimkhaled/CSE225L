#include<iostream>
#include<string>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the two dimensional array size  [rows] [cols] :";
    cin >> rows >> cols;

    string **ptr = new string* [rows];

    for (int i = 0; i < rows; i++)
    {
        ptr[i] = new string[cols];
    }

    cout << "Enter the two dimensional array input:  " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> ptr[i][j];
        }
    }

    cout << "Enter the two dimensional array output :  " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
    delete [] ptr;

    return 0;
}
