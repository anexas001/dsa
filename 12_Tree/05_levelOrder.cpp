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

void levelOrder(Node* root){
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}

int main()
{
    Node* root = new Node(10);
    root->left= new Node(20);
    root->right= new Node(30);
    root->left->left=new Node(8);
    root->left->right=new Node(7);
    root->left->right->left=new Node(9);
    root->left->right->right=new Node(15);
    root->right->left= new Node(6);

    // print level order
    levelOrder(root);
    return 0;
}