#include <bits\stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int value)
    {
        data = value;
        next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};
void InsertAtHead(Node *&head, int h)
{
    Node *temp = new Node(h);
    temp->next = head;
    head = temp;
}
void InsertatTail(Node *&tail, int t)
{

    Node *temp = new Node(t);
    tail->next = temp;
    tail = temp;
}
void InsertatPosition(Node *&head, Node *&tail, int p, int x)
{
    Node *temp = head;
    int count = 1;
    while (count < p - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        InsertatTail(tail, x);
        return;
    }
    Node *node1 = new Node(x);
    node1->next = temp->next;
    temp->next = node1;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *deleteNode(int pos, Node *&head)
{

    if (head == NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node *prev = NULL;
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        if (count == pos)
        {
            prev->next = temp->next;
            free(temp);
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    // temp = temp->next;
    temp->next = NULL;
    return head;
}
Node *convertArrtoLL(vector<int> &a)
{
    Node *head = new Node(a[0]);
    Node *mover;
    for (int i = 1; i < a.size(); i++)
    {
        Node *temp = new Node(a[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int check(Node *&head, int x)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == x)
        {
            return 1;
        }
        temp = temp->next;
    }

    return 0;
}

int main()
{
    Node *n = new Node(1);
    cout << n->data << endl;
    cout << n->next << endl;

    Node *head = n;
    Node *tail = n;

    print(head);
    cout << endl;

    InsertAtHead(head, 2);
    print(head);

    InsertatTail(tail, 3);
    print(tail);
    cout << endl;

    InsertatPosition(head, tail, 2, 4);
    print(head);
    cout << endl;
    cout << head->data << " " << tail->data << endl;

    cout << check(head, 2) << endl;

    deleteTail(head);
    print(head);
    cout << endl;

    deleteNode(2, head);
    print(head);

    // deleteNode(1, head);
    // print(head);
    // cout << endl;

    // vector<int> a = {1, 2, 4, 7};
    // Node *h = convertArrtoLL(a);
    // print(h);
    // // cout << h->data << endl;

    return 0;
    
}