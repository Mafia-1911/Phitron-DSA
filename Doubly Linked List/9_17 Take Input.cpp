#include <bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node* next;
    Node* prev;

    Node(int v){
        this->value=v;
        this->next=NULL;
        this->prev=NULL;
    }
};

void printForward(Node* head){
    Node* temp=head;
    while(temp !=NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
void printBackward(Node* tail){
    Node* temp=tail;
    while(temp !=NULL){
        cout<<temp->value<<" ";
        temp=temp->prev;
    }
}
void insertAtTail(Node* &head,Node* &tail,int v){
    //Because our head also might change that's why we are taking the head as a reference
    Node* newNode=new Node(v);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;

   int val;
   while(1){
       cin>>val;
       if(val==-1){
           break;
       }
       insertAtTail(head,tail,val);
   }
    printForward(head);
    printBackward(tail);


}