#include<bits/stdc++.h>
using namespace std;

// tree structure class
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

// Inorder Traversal
void Inorder(Node* root){
        Node* temp = root;
        if(temp!=NULL){
            Inorder(temp->left);
            cout<<temp->data<<" ";
            Inorder(temp->right);
        }
}

// Preorder Traversal 
void preorder(Node* root){
    Node * temp = root;
    if(temp!=NULL){
        cout<<temp->data<<" ";
        preorder(temp->left);
        preorder(temp->right);
    }
}

// Postorder Traversal 
void postorder(Node* root){
    Node* temp = root;
    if(temp!=NULL){
        postorder(temp->left);
        postorder(temp->right);
        cout<<temp->data<<" ";
    }
}

int main()
{
    // tree construction
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right= new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);

    // printing the inorder of tree
    Inorder(root);
    
    cout<<endl;

    // printing the inorder of tree
    preorder(root);

    cout<<endl;
    
    // printing the postorder of tree
    postorder(root);

    return 0;
}