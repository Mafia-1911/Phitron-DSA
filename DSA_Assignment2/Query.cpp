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
int sz(Node* head){
    int s=0;
    if(head==NULL) return 0;
    else{
        Node* temp= head;
        while(temp!=NULL){
            s++;
            temp=temp->next;
        }
    }
    return s;
}
void delete_nth(Node* &head,Node* &tail,int idx){
    if(head == NULL) return;
    Node* temp=head;
    sz(head);

    if(idx==0){
        head=head->next;
        delete(temp);
    }else if(idx==sz(head)-1){
        //delete Tail

        while(temp->next != tail){
            temp=temp->next;
        }
       // delete(tail);
        tail=temp;
        tail->next=NULL;
    }
    else{

        for(int i=0;i<idx-1;i++){
            if(temp == NULL || temp->next == NULL) return;
            temp=temp->next;
        }
        Node* toDel=temp->next;
        temp->next=temp->next->next;
        delete(toDel);
    }
}
int main() {
    int tc;cin>>tc;
    int x=0,v=0;
    Node* head=NULL;
    Node* tail=NULL;
    int size=0;
    for(int i=0;i<tc;i++){
        cin>>x>>v;

        if(x==0){
            Node* temp=new Node(v);
            temp->next=head;
            head=temp;
            if(tail==NULL){
                tail=head;
            }
            size++;
            print(head);
        }else if(x==1){
            Node* newNode=new Node(v);
            if(head==NULL){
                tail=newNode;
                head=newNode;
                size++;
                //cout<<endl<<"tail is: "<<tail->value<<endl;
            }else{
                //cout<<endl<<"tail is: "<<tail->value<<endl;
                tail->next=newNode;
                tail=newNode;
                size++;
            }
            print(head);
        }else if(x==2){
            if(v>=size){
                print(head);
            }else{
                delete_nth(head,tail,v);
                size--;
                print(head);
            }

        }else{
            cout<<"Wrong Inp";
        }

    }

}
