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
void delete_head(Node* &head,Node* &tail){
    Node* temp=head;
    head=head->next;
    if(head==NULL){
        tail=NULL;
        delete(temp);
        return;
    }
    delete(temp);
    head->prev=NULL;
}
void delete_tail(Node* &head,Node* &tail){
    Node* temp=tail;
    tail=tail->prev;
    if(tail==NULL){
        head=NULL;
        return;
    }
    tail->next=NULL;
    delete(temp);


}