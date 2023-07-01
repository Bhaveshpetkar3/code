#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void insertattail(Node *&head, int data)
{
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
        // cout<<endl;
        cout << "This was the head node." << endl;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
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
void deleteatposi(int posi, Node *&head)
{
    Node *prev = head;
    Node *curr = head->next;
    int tempos = 2;
    if (posi == 1)
    {
        head = head->next;
        return;
    }
    while (curr != NULL and tempos != posi)
    {
        tempos++;
        prev = curr;
        curr = curr->next;
    }
    if (curr == NULL)
    {
        cout << "Not possible. ";
        return;
    }
    prev->next = curr->next;
}
int main()
{
    Node *head = NULL;
    int n;
    cout << "Enter the size of the Linked List: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int temp;
        cout << "Enter the element no. " << i << ": ";
        cin >> temp;
        insertattail(head, temp);
    }
    cout << "Linked List before deletion at position: ";
    printlist(head);
    int posi;
    cout << "\nEnter the position for deletion: ";
    cin >> posi;
    deleteatposi(posi, head);
    cout << "Linked List after deletion: ";
    printlist(head);
    return 0;
}
