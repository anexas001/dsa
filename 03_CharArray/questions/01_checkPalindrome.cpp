#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
    int s = 0;
    int e = str.length()-1;
    while(s<e){
        if(str[s++] != str[e--]){
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin>>s;
    bool result = isPalindrome(s);
    if(result==true){
        cout<<"Palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
    return 0;
}