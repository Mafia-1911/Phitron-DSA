#include <bits/stdc++.h>
using namespace std;

int main() {
int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    std::sort(v.begin(), v.end());

    while(q--){
        int target;
        cin>>target;
        int mid,left=0,right=n;
        while(left<right){
            mid=(left+right)/2;
            if(v[mid]==target){
                cout<<"found";
            }else if(target>mid){
                left=mid+1;
            }else if(target<mid){
                right=mid-1;
            }else cout<<"not found";
        }
    }

}
