#include <bits/stdc++.h>
using namespace std;


int main(){
    list<int>myList(10,7);
   for(auto i=myList.begin();i != myList.end();i++){
       cout<<*i<<" ";
   }
   cout<<endl;
   //We shall use range based for loop for linked list because we dont really care about the index here
   for(auto i:myList){
       cout<<i<<" ";
   }
   cout<<endl;
   //++++ Copying a linked list into another LL
   list<int> l1={1,2,3,4,5,6,7};
   list<int> l2(l1);
   for(int i:l2){
       cout<<i<<" ";
   }
    cout<<endl;

    //++++ Copying an array into another LL
   int arr[]={1,2,34};
   list<int> arrlist(arr,arr+3);
   for(int i:arrlist){
       cout<<i<<" ";
   }
   /// Access random index - Next Function
   list<int> nush;
   nush.push_back(5);
   nush.push_back(6);
   nush.push_back(7);
   nush.push_front(1);
   cout<<endl<<*next(nush.begin(),2)<<endl;

   cout<<"Before inserting: ";
   for(int i:nush)cout<<i<<"->";
    cout<<endl;

   // Inserting at random index
   nush.insert(next(nush.begin(),1),2);
   cout<<"After inserting: ";
   for(int i:nush)cout<<i<<"->";
    cout<<endl;

   //Insert a list at the start of another list
   list<int> a={5,6,7};
   list<int> b={1,2,3,4};
   a.insert(a.begin(),b.begin(),b.end());
   for(int i:a)cout<<i<<"->";

   //++++Delete at any index in a list
   cout<<endl<<"After Deleting: ";
   a.erase(next(a.begin(),3));
   for(int i:a)cout<<i<<"->";

   //++++ Deleting Multiple Values
    cout<<endl<<"After Deleting Multiple: ";
    a.erase(next(a.begin(),1),next(a.begin(),5));
    for(int i:a)cout<<i<<"->";

    //Replacing Values
    cout<<endl<<"After Replacing: ";
    replace(a.begin(),a.end(),7,9999);
    for(int i:a)cout<<i<<"->";

    //Finding values
    cout<<endl<<"Trying to find 1: ";
    // IF found the iterator will stop at that index
    // IF not found the iterator will go to the last index
    auto it=find(a.begin(),a.end(),1);
    it==a.end() ? cout<<"Not found " : cout<< "found";






}