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

void printLeft(Node* root){
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int count = q.size();
        for(int i =0;i<count;i++){
            Node* curr = q.front();
            q.pop();
            if(i==count-1){
                cout<<curr->data<<" ";
            }
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);

        }
    }
}

int main()
{
    // tree construction
    Node* root = new Node(10);
    root->left=new Node(50);
    root->right = new Node(60);
    root->right->left=new Node(70);
    root->right->right=new Node(20);
    root->right->left->right=new Node(8);

    printLeft(root);
    return 0;
}