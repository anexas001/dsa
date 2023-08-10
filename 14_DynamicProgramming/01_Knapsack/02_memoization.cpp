#include<bits/stdc++.h>
using namespace std;

const int D = 100;
int t[D][D];

int knapsack(int wt[], int val[], int n, int W){
    // base condition
    if(n==0 || W==0) return 0;

    if(t[n][W]!=-1) return t[n][W];

    if(wt[n-1]<=W){
        t[n][W]= max(val[n-1]+knapsack(wt, val, n-1, W-wt[n-1]), knapsack(wt, val, n-1, W));
    }

    // wt[n-1]> W
    else{
       t[n][W]= knapsack(wt, val, n-1, W);
    }
    return t[n][W];
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

    // memoization
    memset(t, -1, sizeof(t));

    int maxProfit = knapsack(wt, val, n, W);
    cout<<maxProfit;

    return 0;
}