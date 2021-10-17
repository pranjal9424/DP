class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    bool f=true;
    int solve(Node* root){
        if(root==NULL){
            return 0;
        }
        
        int l=solve(root->left);
        int r=solve(root->right);
        
        if(abs(l-r)>1)
            f=false;
        return max(l,r)+1;
    }
    bool isBalanced(Node *root)
    {
        solve(root);
        return f;
    }
};