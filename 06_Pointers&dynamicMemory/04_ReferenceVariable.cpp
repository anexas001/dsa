#include<iostream>
using namespace std;

int main()
{
    int z = 10;
    int t = z;
    // z and t will have same value but different memory location


    int x = 10;
    int &y = x;
    // x and y will have same memory location and value
    // it creates an alias for the same object
    
    return 0;
}
// It will allow us pass objects by reference
// 1. pointer
// 2. Reference variable