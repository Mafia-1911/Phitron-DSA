#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
public: 
    int value; 
    node* next;

    node(int value){
        this->value=value;
        this->next=NULL;
    }

};
void insert_at_head(node* head,int value){
    node* toInsert=new node(value);
    toInsert->next=head;
    head=toInsert;

}
void insert_at_tail(node* &head , int value){
    node* newNode=new node(value);
    //corner case - The LL is empty There is no value in the head 
    if(head == NULL ){
        head=newNode; 
        return; 
    }
    node* temp = head; 
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void insert_at_middle(node);
int main(){
    node* newNode= new node(3);
    node* head= newNode;
    node* tail= new node(4);

//DO it using functions , which would make it more readable 

    
return 0;
}
