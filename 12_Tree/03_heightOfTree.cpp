#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int k){
        data = k;
        left=right=NULL;
    }
};


// finding height of the tree
int height(Node* root){
    Node* temp = root;
    if(temp == NULL){
        return 0;
    }
    return max(height(temp->left),height(temp->right))+1;
}

int main()
{
    // tree construction 
    Node* root = new Node(10);
    root->left=new Node(8);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->left=new Node(50);

    // printing height of the tree
    cout<< height(root);
    return 0;
}

// Time Complexity = O(n)
// Auxillary Space = O(h)