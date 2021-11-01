#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *left,*right;
    
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};


int idx=0;
Node* bstPeorder(int* preorder,int lr,int rr,int n){
    if(idx>=n || preorder[idx]<lr || preorder[idx]>rr) return NULL;
    
    
    Node* root= new Node(preorder[idx++]);
    
    root->left=bstPeorder(preorder,lr,root->data,n);
    root->right=bstPeorder(preorder,root->data,rr,n);
    
    return root;
}

Node* bstFromPeorder(int* preorder,int n){
    int lr=-1e9-1;
    int rr=1e9+1;
    return bstPeorder(preorder,lr,rr,n);
}
void inOrder(Node* root){
    if(!root) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main()
{
    
    int preorder[9]={30,20,10,15,25,23,39,35,42};
    inOrder(bstFromPeorder(preorder,9));
    return 0;
}