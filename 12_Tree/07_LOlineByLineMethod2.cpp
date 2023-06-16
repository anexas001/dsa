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

void printLevelOrder(Node* root){
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        while(size--){
            Node* curr = q.front();
            q.pop();
            cout<<curr->data<<" ";

            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        cout<<endl;
    }
}

int main()
{
    Node* root = new Node(10);
    root->right=new Node(8);
    root->right->right=new Node(6);
    printLevelOrder(root);
    return 0;
}