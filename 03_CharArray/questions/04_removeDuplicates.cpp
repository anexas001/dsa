#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s){
    // your code goes here
     set<char> ss(s.begin(), s.end());
    string str;
 
    for (auto x : ss)
       str.push_back(x);
 
    return str;
    
}
int main(){
    string s = "geeksforgeeks";
    cout<<removeDuplicate(s);
    return 0;
}

// Expected Time Complexity : O(N)