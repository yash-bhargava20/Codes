#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int val)
    {
        data = val;
        next = NULL;
        back = NULL;
    }
    Node(int val, Node *next1, Node *back1)
    {
        data = val;
        next = next1;
        back = back1;
    }
};
Node *convertArrtoDLL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], NULL, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
Node *display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    vector<int> arr = {1, 0, 2, 8, 9, 6};
    // int n = sizeof(arr) / sizeof(arr[0]);
    Node *head = convertArrtoDLL(arr);
    display(head);

    return 0;
}