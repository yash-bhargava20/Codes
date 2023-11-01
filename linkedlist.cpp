#include<bits\stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next = NULL;

    }

};
void Insert(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;


}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

int main(){
    Node* n=new Node(1);
    cout<<n->data<<endl;
    cout<<n->next<<endl;

    Node* head=n;

    print(head);
    cout<<endl;
    
    Insert(head,2);
    print(head);

    return 0;
}