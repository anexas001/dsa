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

void printLO(Node* root){
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        Node* curr = q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;
            q.push(NULL);
            continue;
        }
        cout<<curr->data<<" ";
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }
    
}

int main()
{
    Node* root = new Node(10);
    root->right=new Node(8);
    root->right->right=new Node(6);
    printLO(root);
    return 0;
}