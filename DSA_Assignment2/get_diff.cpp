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
int getDiff(Node* h1){
    if(h1==NULL){
        return 0;
    }
    int gst=h1->value;
    int smst=h1->value;
    while(h1 != NULL){
        if(h1->value>gst){
            gst=h1->value;
        }
        if(h1->value<smst){
            smst=h1->value;
        }
        h1=h1->next;
    }
    //cout<<gst<<" Small: "<<smst;
    int diff=gst-smst;
    return diff;
}
int main(){
   int n;cin>>n;
   Node* head=new Node(n);
   Node* temp=head;
   while(cin>>n){
       if(n==-1){
           break;
       }
       temp->next=new Node(n);
       temp=temp->next;
   }
   int res=getDiff(head);
   cout<<res;
}