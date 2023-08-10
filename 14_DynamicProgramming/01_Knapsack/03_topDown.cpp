#include<bits/stdc++.h>
using namespace std;

const int D = 100;
int t[D][D];
int knapsack(int wt[], int val[], int n, int W){

    for(int i=1;i<n+1;i++){
        for(int j=1;j<W+1;j++){
            if(wt[i-1]<=j){
                t[i][j] = max(val[i-1]+t[i-1][j-wt[i-1]], t[i-1][j]);
            }
            else{
                t[i][j]=t[i-1][j];
            }
        }
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

    // initialization 
    for(int i=0;i<n+1;i++){
        for(int j=0;j<W+1;j++){
            if(i==0 || j==0){
                t[i][j]=0;
            }
        }
    }

    int maxProfit = knapsack(wt, val, n, W);
    cout<<maxProfit;
    return 0;
}