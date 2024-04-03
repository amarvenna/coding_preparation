#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     // fill constructor
     vector<int> arr(10,0);
     arr.push_back(11);
     arr.push_back(12);
     arr.pop_back();
     cout<<endl;

     for(int i=0;i<arr.size();i++){
	     cout<<arr[i]<<" ";
     }
     cout<<endl;
     return 0;
}
