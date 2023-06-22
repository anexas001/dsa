#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int k){
        data = k;
        left = right = NULL;
    }
    
};
Node* prevv = NULL;
Node* BTtoDLL(Node* root){
    if(root==NULL) return root;
    Node* head = BTtoDLL(root->left);
    if(prevv==NULL){
        head = root;
    } 
    else{
        root->left=prevv;
        prevv->right = root;
    }
    prevv = root;
    BTtoDLL(root->right);
    return head;
}

void display(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->right;
    }
}

int main()
{
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->right->left = new Node(30);
    root->right->right = new Node(35);

    Node* head = BTtoDLL(root);
    display(head);
    return 0;
}