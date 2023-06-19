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

int isBalanced(Node* root){
    if(root==NULL) return 0;
    int lh = isBalanced(root->left);
    if(lh == -1) return -1;
    int rh = isBalanced(root->right);
    if(rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;
    else return max(rh,lh)+1;
}

int main()
{
    // tree construction
    Node* root = new Node(8);
    root->left = new Node(12);
    root->left->left = new Node(13);
    root->left->right = new Node(14);
    root->right=new Node(15);
    root->right->right=new Node(16);
    root->right->right->right=new Node(17);

    cout<<isBalanced(root);
    return 0;
}