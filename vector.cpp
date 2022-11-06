#include<bits/stdc++.h>
#include <iostream>
using namespace std;

// print vector 
void printVector(vector<int> &v){
    cout<<"size : " <<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {

 int n;
 cout<<"enter size of vector"<<endl;
 cin>>n;
 // creating vector
 vector<int>v;
 for(int i=0; i<n;i++){
     int x;
     cout<<"enter value of element"<<endl;
     cin>>x;
     v.push_back(x);
 }
 printVector(v);
    return 0;
}
