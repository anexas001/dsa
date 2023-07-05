#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left; Node* right;
        Node(int k){
            data =k;
            left=right=NULL;
        }
};

int height(Node* root){
    if(root==NULL) return 0;
    else return 1+max(height(root->left),height(root->right));
}

int diameterBT(Node* root){
    if(root==NULL) return 0;
    int d1 = diameterBT(root->left);
    int d2 = diameterBT(root->right);
    int d3 = 1+height(root->left)+height(root->right);
    return max(d1, max(d2,d3));
}

int main()
{
    Node* root = new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->left->left=new Node(60);
    root->right->right=new Node(50);
    cout<<diameterBT(root)<<endl;
    return 0;
}