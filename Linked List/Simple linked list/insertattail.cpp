#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void insertathead(Node *&head, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}
void insertattail(Node* &head,int data)
{
    Node* newnode= new Node();
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
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
    Node *n1 = new Node();
    n1->data = 10;
    n1->next = NULL;
    insertathead(n1, 5);
    insertattail(n1,16);
    printlist(n1);
    return 0;
}