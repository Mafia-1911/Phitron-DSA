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

void sort_linked_list(Node* head){
    //We will be swapping only the values , not messing with the address 
    for(Node* i = head; i->next != NULL; i = i->next) {
        for(Node* j = head->next ; j != NULL; j=j->next) {
                if(i->value > j->value){
                    swap(i->value,j->value);
                }
        }    
    }
}

int main(){
    
return 0;
}
