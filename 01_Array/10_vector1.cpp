#include<iostream>
#include<vector>
using namespace std;

int main(){
    // demo vector
    vector<int> arr = {1, 2, 101 ,15};

    // Fill constructor
    vector<int> arr2(10,7);

    // Pop_Back 
    arr.pop_back();

    // Push_Back
    arr.push_back(16);

    // Print all the elements
    for(int i=0; i<arr2.size();i++){
        cout<< arr2[i]<<endl;
    }

    // size of the vector
    cout<<arr.size()<<endl;

    //capacity of the vector
    cout<<arr.capacity()<<endl;
    return 0;
}