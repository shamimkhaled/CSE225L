#include<iostream>
using namespace std;

int main()
{
    int arr;
    cout << "Enter the array size: ";
    cin >> arr;

    int *ptr = new int[arr];

    cout << "Enter the input of array: ";
    for(int i=0; i<arr; i++)
    {
        cin >> ptr[i];
    }

    cout << "Array output: ";
    for(int i=0; i<arr; i++)
    {
        cout << ptr[i] << " ";
    }
    delete [] ptr;
}
