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

bool Csum(Node* root){
    if(root==NULL) return true;
    if(root->left==NULL && root->right == NULL) return true;
    int sum=0;
    if(root->left!=NULL) sum+=root->left->data;
    if(root->right!=NULL) sum+=root->right->data;
    return (root->data == sum && Csum(root->left) && Csum(root->right));
}

int main()
{
    Node* root = new Node(20);
    root->left=new Node(8);
    root->right=new Node(12);
    root->right->left=new Node(3);
    root->right->right=new Node(9);

    cout<<Csum(root);
    return 0;
}