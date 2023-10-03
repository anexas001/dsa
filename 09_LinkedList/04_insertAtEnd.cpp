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
void print(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

Node* insertEnd(Node* head, int x){
    Node* temp = new Node(x);
    Node* curr = head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

int main()
{
    Node* head = new Node(10);
    head->next = new Node(20);
    print(head);
    head = insertEnd(head, 30);
    print(head);
    return 0;
}