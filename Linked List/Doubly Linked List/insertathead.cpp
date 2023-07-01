#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* prev;
    Node* next;
};
void insertathead(Node* &head,int data)
{
    Node* newnode=new Node();
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(!head)
    {
        head=newnode;
        return;
    }
    newnode->next=head;
    head=newnode;
}
void printlist(Node* &head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
int main()
{
    Node* head= NULL;
    insertathead(head,5);
    printlist(head);
    return 0;
}