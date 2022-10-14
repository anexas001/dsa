#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    int* xptr=&x;

    cout<<xptr<<endl; // will print address of x
    cout<<*xptr<<endl; // will print what is strored to that address 
    cout<<*(&x)<<endl; //will print the same output as the above line

    // NULL Pointer
    int* p =0;
    int* q= NULL;
    // if we try to print null pointer, it will give segmentation fault(memory related error)
    return 0;
}
// if we want to access the value through its address, we use derefernce operator(*)