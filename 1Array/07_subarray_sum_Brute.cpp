#include<iostream>
using namespace std;

int printSubarrays(int* arr, int n){
    int ans = INT16_MIN;
    for(int i=0; i<n; i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum += arr[k];
            }
            cout<<sum<<endl;
            if(ans<sum){
                ans = sum;
            }
        }
    }
    return ans;
}
// find out the largest sum of subarray
// Brute Force

int main()
{
    int arr[] = {-2, 3,4, 5, -12, 6, 2, 3};
    int n = sizeof(arr)/sizeof(int);
    cout<<printSubarrays(arr, n);
    return 0;
}
// Time complexity = O(n^3);