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
    ~Node(){
        int value=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
    }

};
void InsertAtHead(Node* &head,int h){
    Node* temp = new Node(h);
    temp->next=head;
    head=temp;


}
void InsertatTail(Node* &tail,int t){
    Node* temp=new Node(t);
    tail->next=temp;
    tail=temp;
}
void InsertatPosition(Node* &head,Node* &tail,int p,int x){
    Node* temp=head;
    int count=1;
    while(count<p-1){
        temp=temp->next;
        count++;
    }
    if(temp->next== NULL){
        InsertatTail(tail,x);
        return;
    }
    Node* node1=new Node(x);
    node1->next=temp->next;
    temp->next=node1;
    

}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
void deleteNode(int pos,Node* &head){
    if(pos==1){
        Node* temp = head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    // Node* curr=head;
    // Node* prev=NULL;
    // int cnt=1;
    // while(cnt<=pos){

    // }


}

int main(){
    Node* n=new Node(1);
    // cout<<n->data<<endl;
    // cout<<n->next<<endl;

    Node* head=n;
    Node* tail=n;

    print(head);
    cout<<endl;
    
    InsertAtHead(head,2);
    print(head);

    InsertatTail(tail,3);
    print(tail);
    cout<<endl;

    InsertatPosition(head,tail,2,4);
    print(head);
    cout<<endl;
    cout<<head->data<<" "<<tail->data<<endl;

    deleteNode(1,head);
    print(head);



    return 0;
}