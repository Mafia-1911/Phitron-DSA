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
//for Reverse Printing just print the value after the function call 

void reversePrinting(Node* currentNode){
    if(currentNode == NULL ) return ; 
    reversePrinting( currentNode->next);
    cout<<currentNode->value;
}

int main(){
    
return 0;
}
