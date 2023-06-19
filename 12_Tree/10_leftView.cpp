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
int maxLevel = 0;
void printLeft(Node* root, int level){
    if(root == NULL) return;
    if(maxLevel < level){
        cout<<root->data<<" ";
        maxLevel = level;
    }
    printLeft(root->left,level+1);
    printLeft(root->right,level+1);
}

int main()
{
    Node* root = new Node(10);
    root->left=new Node(50);
    root->right = new Node(60);
    root->right->left=new Node(70);
    root->right->right=new Node(20);
    root->right->left->right=new Node(8);
    printLeft(root,1);
    return 0;
}