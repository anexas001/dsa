#include<iostream>
using namespace std;

//printing the sum of each subarray & find out thr largest sum
void printing_subarrays(int* arr, int n){
    for(int i=0; i<n;i++){
        for(int j=i;j<n;j++){
            // cout<<"("<<i<<", "<<j<<"), ";
            for(int k=i;k<=j;k++){
               cout<<arr[k]<<", ";
            }
            cout<<endl;
        }
    }
    

}

int main()
{
    int arr[] = {10,20,30,40,45,60,70,89};
	int n = sizeof(arr)/sizeof(int);
    printing_subarrays(arr, n);
    return 0;
}
// number of sub-arrays for n elements is proportinal to n^2
// Time complexity = O(n*3)