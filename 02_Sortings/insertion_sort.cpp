#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i=1; i<=n-1; i++){
        int current = arr[i];
        int prev = i-1;
        // loop to find the index where the current should be inserted
        while (prev>=0 and arr[prev]>current)
        {
            arr[prev+1]=arr[prev];
            prev = prev -1;
        }
        arr[prev + 1] = current;
        
    }

}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,5,1,3};
    int n = sizeof(arr)/sizeof(int);
    insertion_sort(arr, n);
    for(auto x : arr){
        cout<<x<<", ";
    }
    return 0;
}
// start from arr[1] to a[n-1], place these elements in
// the right position of a[0]
// consider a[0] as sorted
// time complexity = O(n^2)