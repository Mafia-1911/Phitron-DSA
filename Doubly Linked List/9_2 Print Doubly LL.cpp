#include <bits/stdc++.h>
using namespace std;


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