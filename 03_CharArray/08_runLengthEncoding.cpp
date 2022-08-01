#include<iostream>
using namespace std;


// run length encoding for string compression
// if compressed string is bigger than original return original string
// input : aaabbccddee
// output : a3b3c2d2e2

// input : abcd
// output : abcd

string compress(string str){
    int n = str.length();
    string output;
    for(int i=0;i<n;i++){
        int count = 1;
        while(i<n-1 && str[i+1]==str[i]){
            count++;
            i++;
        }
        output += str[i];
        output += to_string(count);
    }
    if(output.length()<str.length()){
        return output;
    }
    else{
        return str;
    }
}
int main()
{
    string s1 = "aaabbccddee";
    cout<<compress(s1)<<endl;

    string s2 = "abcd";
    cout<<compress(s2)<<endl;
    
    return 0;
}

// time complexity : O(n)