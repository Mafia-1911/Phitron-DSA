#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node{
    public: 
    int value;
    node* next;
    node(int value){
        this->value=value;
        this->next=nullptr;
    }
};
void printList(node* head){
    node* temp = head;
while(temp!=nullptr){
    cout<<temp->value<<"->";
    temp=temp->next;
}
}
int main(){
    


return 0;
}
