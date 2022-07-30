#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int pos=0; pos<=n-2;pos++){
        int min_position = pos;

        // fint out the min element
        for(int j=pos; j<n; j++){
            if(arr[j]<arr[min_position]){
                min_position = j;
            }
        }
        // swap outside the loop
        swap(arr[min_position],arr[pos]);
    }
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,5,1,3};
    int n = sizeof(arr)/sizeof(int);
    selection_sort(arr, n);
    for(auto x : arr){
        cout<<x<<", ";
    }
    return 0;
}
// time complexity = O(n^2);