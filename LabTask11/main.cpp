#include <iostream>
#include "quetype.cpp"
using namespace std;

int main()
{
    QueType<int> q1;
    QueType<int> coin;

    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array input: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        q1.Enqueue(arr[i]);
        coin.Enqueue(2);
    }

    int count = 0;
    int j = 0;
    int amount;
    cout << "he amount of money: ";
    cin >> amount;
    while(true)
    {
        q1.Dequeue(j);
        coin.Dequeue(count);
        if(j == amount)
        {
            break;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                q1.Enqueue(j+arr[i]);
                coin.Enqueue(count);
            }
        }




    }
    cout << j << endl;
    return 0;
}
