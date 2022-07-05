// A function that returns maximum subarray sum
#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int cs = 0, ans=0;
    for(int i=0;i<A.size();i++){
        cs = cs + A[i];
        if(cs<0){
            cs = 0;
        }
        ans=max(cs,ans);
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
   cout<<maxSumSubarray(arr);
   return 0;
    
}