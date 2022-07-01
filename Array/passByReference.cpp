#include<iostream>
using namespace std;

// pass by reference 
// we are passing the address the of array not the value
void printArray(int arr[]){
    cout<<"In Function"<<sizeof(arr)<<endl;
    int n=sizeof(arr)/sizeof(int);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(int);
    cout<<"In Main"<<sizeof(arr)<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    printArray(arr);

    return 0;
}

//size of array = 6 elements x size of int 
//              = 6x4 = 24
// in main function size will show 24 bytes
// in printArray function pointer to that array is stored 
// size of pointer variable for 32 bit 4 bytes
//                          for 64 bit 8 bytes 
// for printing the array in the function pass the value of n to the function also