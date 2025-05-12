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

void delete_at_any(Node* &head,int idx){
    //make the connection first , then delete
    Node* temp=head;
    for(int i = 0; i < idx; i++) {
        temp=temp->next;
    }
    Node* toDelete=temp->next;
    temp->next=temp->next->next;
    delete toDelete;
}

// O( N )
void delete_at_tail(Node* head,Node* &tail,int idx){
    Node* temp=head;
    for(int i = 0; i < idx; i++) {
        temp=temp->next;
    }
    Node* toDelete=temp->next;
    temp->next=temp->next->next;
    delete toDelete;
    tail=temp;
}






