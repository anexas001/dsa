#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[], int val[], int n, int W){
    // base condition
    if(n==0 || W==0) return 0;

    if(wt[n-1]<=W){
        return max(val[n-1]+knapsack(wt, val, n-1, W-wt[n-1]), knapsack(wt, val, n-1, W));
    }

    // wt[n-1]> W
    else{
        return knapsack(wt, val, n-1, W);
    }
}

int main()
{
    // no. of items
    int n; cin>>n;
    int wt[n], val[n];

    // input weights of items
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    // input values of items
    for(int i=0;i<n;i++){
        cin>>val[i];
    }

    // maximum capacity of the knapsack
    int W; cin>>W;

    int maxProfit = knapsack(wt, val, n, W);
    cout<<maxProfit;

    return 0;
}

// T(N) = 2T(N-1) + O(1), which is simplified to O(2^N).