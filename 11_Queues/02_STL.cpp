#include<bits/stdc++.h>
using namespace std;

int main()
{
    // create a queue
    queue<int> q;
    
    // enter elements
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // print size of queue 
    cout<<"Size of queue is : "<<q.size()<<endl;

    // pop element
    q.pop();

    // print size of queue 
    cout<<"Size of queue is : "<<q.size()<<endl;

    // printing elements of queue
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}