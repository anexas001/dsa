#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    // base case
    if(n==1 or n==0){
      return true;
    }
    // recursive case
    if(arr[0]<arr[1] and isSorted(arr+1,n-1)){
        return true;
    }
    return false;

}

int main()
{
    int arr[] = {1,4,6,17};
    int n = sizeof(arr)/sizeof(int);
    if(isSorted(arr, n)==0){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
    
    return 0;
}