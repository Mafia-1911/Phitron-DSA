#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    int small=INT_MAX;
    int index=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<small){
            small=v[i];
            index=i;
        }
    }
    cout<<small<<" "<<index+1;

}