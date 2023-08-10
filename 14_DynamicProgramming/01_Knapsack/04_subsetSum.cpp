#include<bits/stdc++.h>
using namespace std;



bool subsum(int arr[], int n, int sum){
    bool t[n+1][sum+1];

    // initialization
    // i denotes the size of the array 
    // j denotes the target sum (subset sum)
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            // when array(i) is empty than there is no meaning of sum of elements so return false
            if(i==0) t[i][j]=false;
            // when sum(j) is zero and there is always a chance of empty subset so return it as true
            if(j==0) t[i][j]=true;
        }
    }

    for(int i = 1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
                t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][sum];

}

int main()
{
    // no. of items
    int n; cin>>n;

    // input values
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // input sum
    int sum; cin>>sum;

    bool ans = subsum(arr, n, sum);
    cout<<ans;

    return 0;
}