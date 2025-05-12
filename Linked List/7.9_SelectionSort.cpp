#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;cin>>size;
    int arr[size];

    for(int i = 0; i < size; i++) {
        cin>>arr[i];
    }
    cout<<"Before Sort : ";
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
//Code for Selection 
    for(int i = 0; i < size-1; i++) {
        for(int j = 1; j < size; j++) {
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<endl<<"After Sort : ";
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }

return 0;
}
