#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int k){
        data = k;
    }
};

int getSize(Node* root){
    if (root == NULL)
        return 0;
    else
        return(getSize(root->left) + 1 + getSize(root->right));
}

int main()
{
    // tree construction
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right= new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right->right= new Node(60);

    cout<<getSize(root);
    
    return 0;
}