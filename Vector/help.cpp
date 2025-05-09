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
    for(int i=0;i<q;i++){
        int target;
        cin>>target;
        int mid,left=0,right=n-1;
        bool found=false;
        while(left<=right){
            mid=(left+right)/2;
            if(v[mid]==target){
                cout<<"found"<<endl;
                found=true;
                break;
            }else if(target>v[mid]){
                left=mid+1;
            }else if(target<v[mid]){
                right=mid-1;
            }
        }
        if(!found){
            cout<<"not found"<<endl;
        }
    }

}
