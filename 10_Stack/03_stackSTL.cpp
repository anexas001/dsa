#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main()
{
    stack<string> books;
    books.push("c");
    books.push("c++");
    books.push("python");
    books.push("java");
    while (!books.empty())
    {
        cout<<books.top()<<" ";
        books.pop();
    }
    
    return 0;
}