/* Given an array containing N positive integers and an integer K. Your task is to find the length of 
the longest Sub-Array with sum of the elements equal to the given value K.
For Input:
7 5
4 1 1 1 2 3 5
your output is: 
4 . */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    // input
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k; cin>>k;
    
    // initialize window pointers
    int i=0,j=0;
    int sum =0, mx=0;
    while(j<n){
        sum = sum + arr[j];
        if(sum<k) j++;
        else if(sum == k){
            mx = max(mx, j-i+1);
            j++;
        }
        else if(sum >k){
            while(sum>k){
                sum=sum-arr[i];
                i++;
            }
            j++;
        }
    }
    cout<< mx<<endl;
    
    return 0;
}