#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int k){
        data = k;\
        left = right = NULL;
    }
};
int maxW(Node* root){
    if(root==NULL) return 0;
    queue<Node*> q;
    q.push(root);
    int maxWidth = 0;
    while(!q.empty()){
        int len = q.size();
        maxWidth = max(len,maxWidth);
        Node* curr = q.front();
        q.pop();
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
        
    }
    return maxWidth;
}
int main()
{
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(40);
    root->left->left->left = new Node(50);
    root->right->left = new Node(50);
    root->right->right = new Node(60);
    

    cout<<maxW(root);
    return 0;
}