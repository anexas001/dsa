#include<iostream>
using namespace std;


// this is optimization for subarray sum problem by brute force 
// using approach Prefix Sums

int printSubarrays(int* arr, int n){
    
    // Prefix sum array
    int prefix[n+1] = {0};
    prefix[0]=arr[0];
    for(int i=1; i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    
    // largest sum logic
    int ans = INT16_MIN;
    for(int i=0; i<n; i++){
        for(int j=i;j<n;j++){
            int sum = i>0 ? prefix[j]-prefix[i-1] : prefix[j];
            ans = max(sum, ans);
            
        }
    }
    return ans;
}
// Prefix sum approach O(n^2)

int main()
{
    int arr[] = {-2, 3,4, 5, -12, 6, 2, 3};
    int n = sizeof(arr)/sizeof(int);
    cout<<printSubarrays(arr, n);
    return 0;
}
// make prefix sum array ps[]
// use ps[j]-ps[i-1] instead of using for loop of k
// it will sum in constant time rather than O(n)
