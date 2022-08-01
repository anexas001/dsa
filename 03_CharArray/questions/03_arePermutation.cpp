#include<iostream>
using namespace std;

#include <bits/stdc++.h>
using namespace std;
 
bool arePermutation(string A, string B)
{
    // your code goes here
    int count=0;
    int n = A.length();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(A[i]==B[j]){
                count++;
                break;
            }
        }
    }
    if(count==n){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    string A = "aaaa";
    string B = "aaaa";
    bool output = arePermutation(A, B);
    if(output==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}