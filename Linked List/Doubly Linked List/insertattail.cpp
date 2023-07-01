#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};
void insertathead(Node *&head, int data)
{
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    newnode->next = head;
    head = newnode;
}
void insertattail(Node* &head,int data)
{
    Node* newnode= new Node();
    newnode->data=data;
    newnode->prev=NULL;
    newnode->next=NULL;
    if(!head)
    {
        head=newnode;
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
}
void printlist(Node *&head)
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
    Node *head = NULL;
    insertathead(head, 5);
    insertathead(head, 4);
    insertathead(head, 3);
    insertathead(head, 2);
    insertattail(head, 17);
    printlist(head);
    return 0;
}