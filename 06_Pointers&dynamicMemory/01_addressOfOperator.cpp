#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    float y = 5.5;
    cout<<&y<<endl;
    cout<<&x<<endl;  // will print the address in hexadecimal form
    // difference between the addresses will be of 4 bytes as int/float is of 4 bytes
    return 0;
}

// to get the address of a variable, we can use the address-of operator(&)
// this address can be store in a special variable called pointer