class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    
    bool bst(Node* root,Node* min,Node* max){
        if(!root) return true;
        
        
        if(min!=NULL && root->data<=min->data) return false;
        
        if(max!= NULL && root->data>=max->data) return false;
        
        bool left=bst(root->left,min,root);
        bool right=bst(root->right,root,max);
        
       return (left && right);
    }
    bool isBST(Node* root) 
    {
        return bst(root,NULL,NULL);
    }
};