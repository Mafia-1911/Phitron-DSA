#include <bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    Node* next;
    Node* prev;

    Node(int v){
        this->value=v;
        this->next=NULL;
        this->prev=NULL;
    }
};

void printForward(Node* head){
    Node* temp=head;
    cout<<"L -> ";
    while(temp !=NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void printBackward(Node* tail){
    Node* temp=tail;
    cout<<"R -> ";
    while(temp !=NULL){
        cout<<temp->value<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}

void insertAtTail(Node* &head,Node* &tail,int v){
    //Because our head also might change that's why we are taking the head as a reference
    Node* newNode=new Node(v);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    //cout<<"Running ins tail";
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
bool insertAtHead(Node* &head,Node* &tail,int val){
    //since our head will change so we shall pass it by reference
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return false;
    }

    newNode->next=head;
    head->prev=newNode;
    head=newNode;
    return true;
}

bool inserAtAny(Node* head,int idx,int val){
    if(head==NULL){
        return false;
    }
    Node* newNode=new Node(val);
    Node*temp=head;
    for(int i=1;i<idx;i++){
        if(temp==NULL){
            return false;
        }else{
            temp=temp->next;
        }

    }
    newNode->next=temp->next;
    temp->next->prev=newNode;
    temp->next=newNode;
    newNode->prev=temp;
    return true;

}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int tailidx=0;

    int tc;cin>>tc;
    while(tc--){
        int x,v;cin>>x>>v;

        if(x>tailidx){
            cout<<"Invalid"<<endl;
        }else{
            if(x==0){
                insertAtHead(head,tail,v);
                tailidx++;
                printForward(head);
                printBackward(tail);
            }else if(x==tailidx){
                insertAtTail(head,tail,v);
                tailidx++;
                printForward(head);
                printBackward(tail);
            }else if(x<tailidx){
                if(inserAtAny(head,x,v)){
                    tailidx++;
                    printForward(head);
                    printBackward(tail);
                }
            }

        }

    }
}