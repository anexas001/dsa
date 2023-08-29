// maximum sum subarray of size k
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
    int i=0,j=0;
    int sum = 0;
    int mx = INT_MIN;
    while(j<n){
        sum = sum + arr[j];
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            mx = max(mx, sum);
            sum = sum - arr[i];
            i++; j++;
        }
    }
    cout<<mx<<"\n";
    return 0;
    // TC = O(n)
}

// Brute force
/*
int maxSum = INT_MIN;
for(int i=0;i<n;i++){
    int sum = 0;
    for(int j=i;j<i+3;j++){
        sum+=arr[i];
    }
    maxSum = max(maxSum, sum);
}
return maxSum
*/
// TC = O(n^2)