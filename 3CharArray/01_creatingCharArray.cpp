#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[] = {'a','b','c','\0'}; // '\0' is a null character
    char b[] = "abc"; // same as previous line;
    cout<<a<<endl;
    cout<<strlen(a)<<endl; // gives number of char
    cout<<sizeof(a)<<endl; // gives length acquire by char, acknowledges null space also in memory

    // for reading the char array we don't need loop
    char c[5];
    cin>>c; 
    // cin doesn't process spaces/new line, when found it breaks

    return 0;
}