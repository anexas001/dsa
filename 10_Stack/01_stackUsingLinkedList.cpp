// stack can be made by using:
// 1. Array 
// 2. Vectors
// 3. Linked List 
#include<bits/stdc++.h>
#include "stackLL.h"
using namespace std;

int main()
{
    Stack<char> s;
    s.push('h');
    s.push('e');
    s.push('l');
    s.push('l');
    s.push('o');
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}