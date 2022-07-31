#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    // char s[100] = {'1','a', '2', '\0'};

    string s = "hello world"; //Dynamic array
    string k("goodbye world"); // constructor
    cout<<s<<endl<<k<<endl;
    
    // iterate over each character of the string
    for(char ch : s){
        cout<<ch<<",";
    }
    cout<<endl;

    // input from the user
    string str;
    getline(cin,str);
    cout<<str<<endl;

    string str2;
    getline(cin,str2, '.'); // will take the input until '.' found
    cout<<str2<<endl;
    cin.get();

    // taking multiple strings as input
    int n =5;
    vector<string> sarr;
    string temp;
    while(n--){
        getline(cin,temp);
        sarr.push_back(temp);
    }
    for(string x : sarr){
        cout<<x<<", ";
    }
    return 0;
}