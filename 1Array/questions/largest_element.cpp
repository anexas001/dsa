// A function that takes array of integers as input and returns the largest element
#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int ans=INT_MIN;
    for(int i=0;i<arr.size();i++){
        ans=max(ans,arr[i]);
    }
    return ans; 
}
int main(){
	int a;
    vector<int> arr;
    while(cin>>a)
   { 
       arr.push_back(a);
   }
   cout<<largestElement(arr);
   return 0;
    
}

