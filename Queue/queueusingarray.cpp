#include <bits/stdc++.h>
using namespace std;
class Queue
{
public:
    int front, rear, size;
    int *arr;
    Queue(int sizee)
    {
        front = rear = 0;
        size = sizee;
        arr = new int[size];
    }
    void push(int data)
    {
        if (rear == size)
        {
            cout << "Queue is FULL";
            return;
        }
        arr[rear++] = data;
    }
    int pop()
    {
        if (isempty())
        {
            cout << "Queue is emptyy.";
            return 0;
        }
        int ele = arr[front];
        if (front == rear - 1)
        {
            front = rear = 0;
            return ele;
        }
        front++;
        return ele;
    }
    bool isempty()
    {
        return front == rear;
    }
    void printqueue()
    {
        if (isempty())
        {
            cout << "Queue is empty";
            return;
        }
        for (int i = front; i < rear; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    Queue q(4);
    q.push(10);
    q.push(10);
    q.push(10);
    q.push(10);
    
    q.printqueue();
    return 0;
}