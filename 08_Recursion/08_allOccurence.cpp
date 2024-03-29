//Expected Time Complexity: O(N)
#include <bits/stdc++.h>
using namespace std;

vector<int> vec;


void helper(int k, vector<int> v, int i){
    if(i==v.size()){
        return;
    }
    if(v[i]==k){
        vec.push_back(i);
        
    }
    helper(k,v,i+1);
    return;
}

vector<int> findAllOccurences(int k, vector<int> v){
       vec.clear();
       helper(k,v,0);
       return vec;
}

int main()
{
    vector<int> arr = {1,3,5,7,6,2,11,7,21};
    int key = 7;
    vector<int> output = findAllOccurences(key, arr);
    for(auto x : output){
        cout<<x<<" ";
    }
    return 0;
}