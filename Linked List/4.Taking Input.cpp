#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
public: 
    int value; 
    Node* next;

    Node(int value){
        this->value=value;
        this->next=NULL;
    }

};
void insert_at_tail(Node* head , Node* tail, int val){
    Node* newNode= new Node(val);
    if( head== NULL ){ 
        head=newNode;
        return; 
    }
    tail->next=newNode;
    tail=newNode;
}
void print(Node* head){
    Node* temp=head;
    while(temp != NULL ){
        cout<<temp->value<<" -> ";
        temp=temp->next;
    }
}
void input(Node* &head,Node* &tail,int data){
    while(1){
        if(data == -1 ){
            break;
        }else{
            insert_at_tail(head,tail,data);
        }
    }
}
int main(){
    Node* head = NULL ;
    Node* tail = NULL ; 
    head=new Node(1);
    head->next=tail;
    tail = new Node(2);
    print(head);
    
    print(head);
    
return 0;
}
