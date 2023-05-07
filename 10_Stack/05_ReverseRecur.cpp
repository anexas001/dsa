#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int data){
    if(s.empty()){
        s.push(data);
        return;
    }
    // recursive case
    int temp = s.top();
    s.pop();
    insertAtBottom(s,data);
    s.push(temp);
}

void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int t = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s, t);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    
    reverse(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}