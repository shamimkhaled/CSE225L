#include <bits/stdc++.h>
#include "pqtype.cpp"
using namespace std;


int main()
{
    PQType<int> pqtype(15);

    if(pqtype.IsEmpty())
        cout << "Queue is Empty" <<endl;

    cout << "Enter the number for insert queue:  ";
    for(int i=0; i<10; i++)
    {
        int m;
        cin >> m;
        pqtype.Enqueue(m);
    }

    if(!pqtype.IsEmpty())
        cout << "Queue is Empty" <<endl;

    int value;
    for(int i=0; i<2; i++)
    {
        pqtype.Dequeue(value);
        cout << value << endl;
    }

    int n = 5;
    int k = 3;
    priority_queue<int> pq;
    pq.push(2);
    pq.push(1);
    pq.push(7);
    pq.push(4);
    pq.push(2);
    int total = 0;
    while (k--) {
        total += pq.top();
        pq.push(pq.top()/2);
        pq.pop();
    }
    cout << total << "\n";

}


