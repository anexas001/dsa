#include<bits\stdc++.h>
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

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    
    insertAtBottom(s, 0);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}