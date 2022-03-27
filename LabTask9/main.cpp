//SHAMIM MIAH 1813597642
#include <iostream>
#include "quetype.cpp"
using namespace std;

void printQue(QueType<int> q)
{

    QueType<int> temp;

    while(!q.IsEmpty())
    {
        int n;
        q.Dequeue(n);
        temp.Enqueue(n);
        cout << n << " ";
    }
    cout << endl;
    q = temp;
}

int main()
{

    QueType<int> q1(5);

    if(q1.IsEmpty())
    {
        cout << "Queue is Empty" << endl;
    }

    q1.Enqueue(5);
    q1.Enqueue(7);
    q1.Enqueue(4);
    q1.Enqueue(2);

    if(!q1.IsEmpty())
    {
        cout << "Queue is not empty" << endl;
    }
    if(!q1.IsFull())
    {
        cout << "Queue is not full" << endl;
    }

    q1.Enqueue(6);
    printQue(q1);

    if(q1.IsFull())
    {
        cout << "Queue is full" << endl;
    }

    if(!q1.IsFull())
    {
        q1.Enqueue(8);
    }
    else
    {
        cout << "Queue Overflow" << endl;
    }

    int m;
    q1.Dequeue(m);
    q1.Dequeue(m);
    printQue(q1);

    q1.Dequeue(m);
    q1.Dequeue(m);
    q1.Dequeue(m);

    if(q1.IsEmpty())
    {
        cout << "Queue is Empty" << endl;
    }
    if(!q1.IsEmpty())
    {
        q1.Dequeue(m);
    }
    else
    {
        cout << "Queue Underflow" << endl;
    }

    cout << "------------------------------------------------------------" << endl;

    QueType<string> q2;
    string str;

    int k;
    cout << "Enter an integer input for printing binary values (1 to k):";
    cin >> k;

    q2.Enqueue("1");
    while(k--)
    {
        q2.Dequeue(str);
        string s = str;
        cout << s << endl;
        string s1 = s;
        q2.Enqueue(s.append("0"));
        q2.Enqueue(s1.append("1"));
    }



    return 0;
}
