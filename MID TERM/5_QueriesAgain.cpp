#include <bits/stdc++.h>
using namespace std;

void printForward(list<int> head){
    cout<<"L -> ";
    for(auto i:head){
        cout<<i<<" ";
    }
    cout<<endl;
}
void printBackward(list<int> head){

    cout<<"R -> ";
    head.reverse();
    for(auto i:head){
        cout<<i<<" ";
    }
    cout<<endl;
}



int main(){
    list<int> myList;
    int tc;cin>>tc;

    while(tc--){
        int x,v;cin>>x>>v;

        if(x==0){
                myList.push_front(v);
                printForward(myList);
                printBackward(myList);
        }else if(x==1){
                myList.push_back(v);
                printForward(myList);
                printBackward(myList);
        }else if(x==2){
                //delete Vth index
                if(v<myList.size()){
                    auto it=myList.begin();
                    advance(it,v);
                    myList.erase(it);
                }
            printForward(myList);
            printBackward(myList);

        }

    }
}