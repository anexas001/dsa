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

bool findPath(Node* root, vector<Node*> &p, int n){
    if(root==NULL) return false;
    p.push_back(root);
    if(root->data==n) return true;
    if(findPath(root->left, p, n)||findPath(root->right,p,n)){
        return true;
    }
    p.pop_back(); 
    return false;
}
Node* LCA(Node* root, int n1, int n2){
    vector<Node*> path1, path2;
    if(findPath(root, path1, n1)==false || findPath(root, path2, n2)==false) return NULL;
    for(int i=0;i<path1.size()-1 && i<path2.size()-1;i++){
        if(path1[i+1]!=path2[i+1]){
            return path1[i];
        }
    }
    return NULL;
}

int main()
{
    Node* root = new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->left->left=new Node(60);
    root->right->right=new Node(50);
    cout<<LCA(root, 60, 50)<<endl;
    return 0;
}