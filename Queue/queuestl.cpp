#include<bits/stdc++.h>
using namespace std;
void printqueue(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20); 
    q.push(30);
    if(q.empty())
        cout<<"Queue is empty\n";
    else
        cout<<"Queue is not empty\n";
    cout<<"Size of queue is "<<q.size()<<endl;
    cout<<"Front element of queue is "<<q.front()<<endl;
    cout<<"Back element of queue is "<<q.back()<<endl;
    cout<<"Before poping queue is ";
    printqueue(q);
    cout<<"After poping queue is ";
    q.pop();
    printqueue(q);
    cout<<"Size of the queue after poping is "<<q.size()<<endl;
}
