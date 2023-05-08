#include<iostream>
#include "array.h"
using namespace std;

int main()
{
    Queue<int> q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    while(!q.isEmpty()){
        cout<<q.front()<<" ";
        q.dequeue();
    }
    return 0;
}