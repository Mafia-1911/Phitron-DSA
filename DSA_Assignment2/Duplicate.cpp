#include <bits/stdc++.h>
using namespace std;
struct Node{
    int value;
    Node* next;
    Node(int n){
        this->value=n;
        this->next=NULL;
    }
};
void print(Node* head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void takeInput(Node* head){
    Node* temp1=head;
    while(1){
        int n3; cin>>n3;
        if(n3==-1){
            break;
        }
        temp1->next=new Node(n3);
        temp1=temp1->next;
    }
}
//In a two loop problem . The Value of j should reset for every node when we are comparing
// Always use temp != Null so that you dont skip the last node

void removeDuplicates(Node* &head){
    //Using 2 loops
    for(Node* temp=head; temp != NULL ; temp=temp->next){
        int tocheck=temp->value;
        Node* j = temp->next;
        Node* prev=temp;
        while(j != NULL){
            if(j->value == tocheck){
                //Its a Duplicate
                prev->next=j->next;
                j=prev->next;
            }else{
                j= j->next;
                prev=prev->next;
            }
        }
    }
}
void sorting(Node* &head){
    for(auto temp=head;temp->next != NULL ; temp=temp->next){
        for(auto j=temp->next; j!=NULL ;j=j->next){
            if(temp->value > j->value){
                swap(temp->value,j->value);
            }
        }
    }

}
void duplicateSorted(Node* head){
    Node* temp=head;
    while(temp != NULL){
        if(temp->next != NULL && temp->value == temp->next->value){
            Node* toDelete=temp->next;
            temp->next=temp->next->next;
            delete(toDelete);

        }else{
            //They are not equal so move the pointer ahead
            temp=temp->next;
        }

    }
};
int main() {
    int n;
    cin >> n;
    Node *head = new Node(n);
    Node *temp = head;
    while (cin >> n) {
        if (n == -1) {
            break;
        }
        temp->next = new Node(n);
        temp = temp->next;
    }
    removeDuplicates(head);
    print(head);
}
