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

void delete_at_head(Node* &head){
    Node* toDelete=head;
    head=head->next;
    delete(toDelete);
}
void delete_at_any(Node* &head,int idx){
    Node* temp=head;
    for(int i = 0; i < idx; i++) {
        temp=temp->next;
    }
    temp->next = temp->next->next;

}
void delete_tail(Node* head){
    
}