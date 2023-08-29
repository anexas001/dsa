// first negative integer in every window of size k
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k; cin>>k;
    vector<int> ans;
    queue<int> q;
    int i=0,j=0;
    while(j<n){
        if(arr[j]<0) q.push(arr[j]);
        if(j-i+1<k) j++;
        else if(j-i+1==k){
            if(q.empty()) ans.push_back(0);
            else ans.push_back(q.front());
            if(arr[i]<0){
                q.pop();
            }
            j++;i++;
        }
    }
    for(auto x : ans){
        cout<<x<<" ";
    }
    // TC - O(n)
    return 0;
}
// Brute Force
/*
vector<int> ans;
    for(int i=0;i<n;i++){
    bool t = true;
        int j;
        for(j=i;j<i+k;j++){
            if(arr[j]<0){
                ans.push_back(arr[j]);
                t  = false; break;
            }
        }
        if(t==true){
            ans.push_back(0);
        }
    }
    for(auto x : ans){
        cout<<x<<" ";
    }
TC - O(n^2)
*/