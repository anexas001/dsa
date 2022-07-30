#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int times=1; times<=n-1; times++){
        for(int j=0; j<= n-1-times; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,5,1,3};
    int n = sizeof(arr)/sizeof(int);
    bubble_sort(arr, n);
    
    for(auto x : arr){
        cout<<x<<", ";
    }
    return 0;
}
// time complexity = O(n^2)