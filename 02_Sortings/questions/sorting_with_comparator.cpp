// Given an integer vector and a bool variable flag, your task is to sort the vector in accordance to the boolean value.
// If the bool value passed is true then sort it in non-decreasing order or vice versa.
// You can use any sorting technique of your choice.


#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
    return a > b;
}
vector<int> sortingWithComparator(vector<int> &v, bool flag){
    // your code  goes here
    if(flag) sort(v.begin(), v.end());
    else sort(v.begin(), v.end(), compare);
    return v;
}
int main(){
    vector<int> arr = {-2,3,4,-1,5,-12,5,1,3};
    bool flag = 1;
    sortingWithComparator(arr, flag);
    for(int x : arr){
        cout<<x<<", ";
    }
    return 0;
}