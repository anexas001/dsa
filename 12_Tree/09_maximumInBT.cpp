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

int maxNode(Node* root){
    if(root == NULL) return INT_MIN;
    else{
        return max(root->data, max(maxNode(root->left), maxNode(root->right)));
    }
}

int main()
{
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right= new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right->right= new Node(60);

    cout<<maxNode(root)<<endl;
    return 0;
}