#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this ->data = data;
        this -> next = NULL;
    }
};
void print(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    print(head);
    return 0;
}