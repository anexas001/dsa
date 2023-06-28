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

void printSpiral(Node* root){
    if(root == NULL) return;
    queue<Node*> q;
    stack<int> s;
    bool reverse = false;
    q.push(root);
    while(!q.empty()){
        int count = q.size();
        for(int i=0;i<count;i++){
            Node* curr = q.front();
            q.pop();
            if(reverse){
                s.push(curr->data);
            }
            else{
                cout<<curr->data<<" ";
            }
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        if(reverse){
            while (!s.empty()){
                cout<<s.top()<<" ";
                s.pop();
            }
            
        }
        reverse=!reverse;
        cout<<endl;
    }
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(8);
    root->left->left->right= new Node(9);

    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right ->left->left= new Node(10);

    printSpiral(root);
    
    return 0;
}