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
void insertattail(Node *&head, int data)
{
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
        //cout<<endl;
        cout<<"This was the head node."<<endl;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
//Remember that positions are 1-indexed;
void insertatpos(int posi,Node* &head,int data)
{
    int tempos=1;
    Node* newnode=new Node();
    newnode->data=data;
    newnode->next=NULL;
    if(posi==1)
    {
        newnode->next=head;
        head=newnode;
        return;
    }
    Node* temp= head;
    while(temp!=NULL and tempos!=posi-1)
    {
        tempos++;
        temp=temp->next;
    }
    if(temp==NULL)
    {
        cout<<"Not possible";
        return;
    }
    newnode->next=temp->next;
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
    Node *head = NULL;
    int n;
    cout<<"Enter the size of the Linked List: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int temp;
        cout<<"Enter the element no. "<<i<<": ";
        cin>>temp;
        insertattail(head,temp);
    }
    cout<<"Linked List before insertion at position: ";
    printlist(head);
    int g,posi;
    cout<<"\nEnter the 1] position and 2] data to be inserted at that position: ";
    cin>>posi>>g;
    insertatpos(posi,head,g);
    cout<<"Linked List after insertion: ";
    printlist(head);
    return 0;
}