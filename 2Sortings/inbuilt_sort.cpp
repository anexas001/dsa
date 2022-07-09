#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    return a>b;
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,5,1,3};
    int n = sizeof(arr)/sizeof(int);
    // sort(arr, arr + n); // ascending order

    // descending order
        // reverse(arr, arr + n); 
        // or
    sort(arr, arr + n, compare); // compare not a function call but passing a function as a parameter to another
    // sort(arr, arr + n, greater<int>()); inbuilt comparator object
    for( auto x : arr){
        cout<<x<<", ";
    }
    return 0;
}
// time complexity = O(nlogn)