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

Node* insertdata(Node* root,int val){
    if(!root) return new Node(val);
    
    if(val<root->data) root->left=insertdata(root->left,val);
    else root->right=insertdata(root->right,val);
    
    return root;
}

void inOrder(Node* root){
    if(!root) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main()
{
    Node* root=NULL;
    root=insertdata(root,5);
    insertdata(root,1);
    insertdata(root,3);
    insertdata(root,4);
    insertdata(root,2);
    insertdata(root,7);
    
    inOrder(root);
    return 0;
}
