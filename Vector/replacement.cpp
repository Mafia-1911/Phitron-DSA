#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<q;i++){
        int l,r,sum=0;
        cin>>l>>r;
        for(int i=l;i<r;i++){
            sum+=v[i];
        }
        cout<<sum;
    }

}

int mainF(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v.at(i);
    }
//    for(auto it=v.begin();it<v.end();it++){}
    int count=0;
    for(int i=0;i<n;i++){
        if(find(v.begin(),v.end(),v[i]+1) != v.end()){
            count++;
        }
    }
cout<<count;
}

int mainC(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v.at(i);
    }

    for(vector<int>::iterator it=v.begin();it<v.end();it++){
        if(*it < 0 ){
            *it=2;
        }else if(*it>0){
            *it=1;
        }else *it=0;
    }
    for(auto ele:v){
        cout<<ele<<" ";
    }
//    replace(v.begin(),v.end(),)
}