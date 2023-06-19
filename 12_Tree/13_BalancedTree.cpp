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

int height(Node* root){
    if(root == NULL) return 0;
    return max(height(root->left),height(root->right))+1;
}

bool isBalanced(Node* root){
    if(root == NULL) return true;
    int lh = height(root->left);
    int rh = height(root->right);
    return (abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right));
}

int main()
{
    // tree construction
    Node* root = new Node(18);
    root->left = new Node(4);
    root->right = new Node(20);
    root->right->left = new Node(13);
    root->right ->right= new Node(70);

    cout<<isBalanced(root);
    
    return 0;
}