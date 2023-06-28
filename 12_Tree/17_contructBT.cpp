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

int preIndex=0;
Node* cTree(int in[], int pre[], int is, int ie){
    if(is>ie) return NULL;
    Node* root = new Node(pre[preIndex++]);
    
    int inIndex;
    for(int i=is;i<=ie;i++){
        if(in[i]==root->data){
            inIndex = i;
            break;
        }
    }
    root->left = cTree(in, pre, is, inIndex-1);
    root->right = cTree(in,pre, inIndex+1, ie);
    return root;
}

int main()
{
    int in[] = {20,10,40,30,50};
    int pre[] = {10, 20, 30, 40, 50};
    Node* root = cTree(in, pre, 0, 4);
    return 0;
}