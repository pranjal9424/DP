Node* inorder(Node* root,int data){
    if(!root) return root=newNode(data);
    
    if(data<root->data){
        root->left=inorder(root->left,data);
    }else {
        root->right=inorder(root->right,data);
    }
    
    return root;
}


//Function that constructs BST from its preorder traversal.
Node* post_order(int pre[], int size)
{
    Node* root=NULL;
    for(int i=0;i<size;i++){
        root=inorder(root,pre[i]);
    }
    return root;
}