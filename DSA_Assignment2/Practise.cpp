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
bool checkSame(Node* h1,Node* h2){
    if(h1==NULL && h2==NULL){
        return true;
    }
    while(h1 != NULL){
        if(h1->next != NULL && h2->next==NULL || h1->next==NULL && h2->next != NULL){
            return false;
        }else if(h1->value != h2->value){
            return false;
        }
        h1=h1->next;
        h2=h2->next;

    }
    return true;
}
int main(){
    int n,n2;
    cin>>n;
    Node* head1=new Node(n);
    takeInput(head1);


    cin>>n2;
    Node* head2=new Node(n2);
    takeInput(head2);


    if(checkSame(head1,head2)){
        cout<<"YES";
    }else cout<<"NO";

}