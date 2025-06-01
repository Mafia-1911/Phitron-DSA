#include <bits/stdc++.h>
using namespace std;


int main(){
    list<string> myList;
    string input;
    getline(cin,input);
    stringstream ss(input);
    while(1){
        string word;
        ss>>word;
        if(word=="end"){
            break;
        }else{
            myList.push_back(word);
        }
    }
    int tc;cin>>tc;
    auto it=myList.begin();

    while(tc--){
        string query;
        cin>>query;
        if(query=="visit"){
            string toVisit;cin>>toVisit;
            auto found=find(myList.begin(), myList.end(),toVisit);
            if(found==myList.end()){
                cout<<"Not Available"<<endl;
            }else{
                it=found;
                cout<<*it<<endl;
            }
        }else if(query=="prev"){
            if(it == myList.begin()){
                cout<<"Not Available"<<endl;
            }else {
                it = --it;
                cout << *it << endl;

            }

        }else if(query=="next"){
            if(it == --myList.end()){
                cout<<"Not Available"<<endl;
            }else {
                it = ++it;
                cout << *it << endl;

            }
        }
    }
}