// Given an array of integers A (sorted) and a integer Val.
// Implement a function that takes A and Val as input parameters and returns the lower bound of Val.
// Note: If Val is not present in array then Lower bound of a given integer means integer which is just smaller than given integer. Otherwise Val itself is the answer.
// If Val is less than smallest element of array A then return '-1' in that case.

#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    
    int sz = A.size();
    
    int l = 0, r = (sz-1);
    
    int answer = -1;
    
    while (l <= r) {
        int mid = (l + r) / 2;
        if (A[mid] > Val) {
            r = mid-1;
        }
        else {
            answer = A[mid];
            l = mid+1;
        }
    }
    
    return answer;
    
}
int main(){
	int a,b;
	vector<int> arr;
	while(cin>>a){
		arr.push_back(a);
	}
	cin>>b;
	cout<<lowerBound(arr, b);
	return 0;
}

