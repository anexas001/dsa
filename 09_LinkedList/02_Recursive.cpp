#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int k){
        data = k;
        next=NULL;
    }
};

void recurL(Node* head){
    if(head==NULL) return;
    cout<<head->data<<" ";
    recurL(head->next);
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    recurL(head);
    return 0;
}