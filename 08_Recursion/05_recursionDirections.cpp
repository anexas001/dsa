#include<iostream>
using namespace std;

void decreasing(int n){
    // base case
    if(n==0){
        return;
    }
    // towards the base case
    cout<<n<<", ";
    decreasing(n-1);
}
void increasing(int n){
    // base case
    if(n==0){
        return;
    }
    increasing(n-1);
    cout<<n<<", ";
    
}


int main()
{
    int n;
    cin>>n;
    decreasing(n);
    cout<<endl;
    increasing(n);
    return 0;
}
// top to bottom
// anything which is written before the funtion call will be executedbwhile going towards the base case

// bottom to top
// write code after the function call when you are coming fromt the small case to the top case