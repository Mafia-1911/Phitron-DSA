#include <bits/stdc++.h>
using namespace std;
bool checker(int l,int r){
    return l>r;
}
int main(){
    int tc;cin>>tc;
    while(tc--){
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(adjacent_find(v.begin(),v.end(),checker)==v.end()){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;

//        bool okay=true;
//        for(int i=0,j=1;j<n;i++,j++){
//            if(v[i]>v[j]){
//                okay=false;
//                break;
//            }
//        }
//        if(okay){
//            cout<<"YES"<<endl;
//        }else cout<<"NO"<<endl;
    }

}