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

///inorder Succ logic here
Node* inorderSucc(Node* root){
    Node* curr=root;
    
    while(curr && curr->left != NULL){
        curr=curr->left;
    }
    return curr;
}

///deletion In BST
Node* deletionInBST(Node* root,int Key){
    if (root == NULL)
        return root;
    if( Key < root->data ) 
         root->left=deletionInBST(root->left,Key);
    else if( Key > root->data)
            root->right=deletionInBST(root->right,Key);
    else {
        if (root->left==NULL and root->right==NULL)
            return NULL;
       else
        if(root->left == NULL)
        {
            Node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL)
            {
                Node* temp=root->left;
                free(root);
                return temp;
            }
        else
        {
            Node* temp=inorderSucc(root->right);
            root->data=temp->data;
            root->right = deletionInBST(root->right,temp->data);
        }
    }
    
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
    cout<<endl;
    //Node* node=deletionInBST(root,7);
    inOrder(deletionInBST(root,1));
    return 0;
}
