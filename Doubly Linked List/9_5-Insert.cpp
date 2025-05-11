#include <bits/stdc++.h>
using namespace std;


struct Node{
    int v;
    Node* next;
    Node* prev;

    Node(int v){
        this->v=v;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insertAtHead(Node* &head,Node* &tail,int val){
    //since our head will change so we shall pass it by reference
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }

    newNode->next=head;
    head->prev=newNode;
    head=newNode;
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
void inserAtAny(Node* head,int idx,int val){
    Node* newNode=new Node(val);
    Node*temp=head;
    for(int i=0;i<idx;i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next->prev=newNode;
    temp->next=newNode;
    newNode->prev=temp;

}
int main(){
    int size;
    cin>>size;

}
