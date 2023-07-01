#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
int main()
{
    Node* n1=new Node();
    n1->data=10;
    n1->next=NULL;
    cout<<n1->data;
    return 0;
}