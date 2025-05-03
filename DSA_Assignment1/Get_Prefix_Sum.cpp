#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<long long int> v(n);
    for(auto i=0;i<n;i++){
        cin>>v[i];
    }
    vector<long long int> prefixArr(n);
    prefixArr[0]=v[0];
    for(int i=1;i<=n-1;i++){
        prefixArr[i]=prefixArr[i-1]+v[i];
    }
    reverse(prefixArr.begin(),prefixArr.end());
    for(auto i:prefixArr){
        cout<<i<<" ";
    }
}