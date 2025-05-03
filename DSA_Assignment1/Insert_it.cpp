#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> va(n);
    for(int i=0;i<n;i++){
        cin>>va[i];
    }
    int m; cin>>m;
    vector<int> vb(m);
    for(int i=0;i<m;i++){
        cin>>vb[i];
    }
    int index;cin>>index;
   va.insert(va.begin()+index,vb.begin(),vb.end());
    for(auto i:va){
        cout<<i<<" ";
    }

}