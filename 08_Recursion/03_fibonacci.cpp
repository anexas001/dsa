#include<iostream>
using namespace std;

int fibonacci(int n){
    // base case
    if(n==0 or n==1){
        return n;
    }
    int f1 = fibonacci(n-1);
    int f2 = fibonacci(n-2);
    return f1 + f2;
}



int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;

    return 0;
}

// f(n) = f(n-1)+f(n-2)
// time complexity = O(2^n)
// space complexity = O(n)