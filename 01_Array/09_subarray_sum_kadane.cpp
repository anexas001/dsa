#include<iostream>
using namespace std;


int maximum_subarray_sum(int arr[], int n){
    int cs = 0;
    int ans = 0;
    for(int i = 0; i<n; i++){
        cs = cs + arr[i];
        if(cs<0){
            cs = 0;
        }
        ans = max(ans, cs);
    }

    return ans;
}

// Kadane's Alogrithm O(n)
// does not take extra space like in prefix sum approach
// space complexity O(1)
// best possible solution we can have for maximum subarray problem

int main()
{
    int arr[] = {-2, 3,4, 5, -12, 6, 2, 3};
    int n = sizeof(arr)/sizeof(int);
    cout<<maximum_subarray_sum(arr, n);
    return 0;
}