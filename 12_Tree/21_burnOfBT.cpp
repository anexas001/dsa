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

int res =0;
int burnTime(Node* root, int leaf, int &dist){
    if(root==NULL) return 0;
    if(root->data == leaf){
        dist=0; return 1;
    }
    int ldist =-1, rdist=-1;
    int lh = burnTime(root->left, leaf, ldist);
    int rh = burnTime(root->right, leaf, rdist);
    if(ldist!=-1){
        dist=ldist+1;
        res = max(res, dist+rh);
    }
    else if(rdist!=-1){
        dist=rdist+1;
        res = max(res, dist+lh);
    }
    return max(lh, rh)+1;
}

int main()
{
    Node* root = new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->left->left=new Node(60);
    root->right->right=new Node(50);
    int dist =0;
    int ans = burnTime(root, 20, dist);
    cout<<dist<<" "<<ans;
    return 0;
}