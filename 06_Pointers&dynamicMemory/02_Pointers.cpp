#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    float y = 5.5;

    int* xptr=&x; // initializing a pointer variable for x
    float* yptr=&y; // initializing a pointer variable for y

    // will print the address of y
    cout<<&y<<endl;
    cout<<yptr<<endl;
    
    // will print the address of x
    cout<<&x<<endl;
    cout<<xptr<<endl;

    // address of the pointer variable
    cout<<&xptr<<endl;
    cout<<&yptr<<endl;

    //pointer variable to a pointer varibale
    int** xxptr=&xptr;
    float** yyptr=&yptr;
    return 0;
}
// pointer is a variable that holds the address of another variable