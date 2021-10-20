class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    
    int solve(Node *root){
        if(root==NULL) return 0;
        
        int a=solve(root->left);
        int b=solve(root->right);
        int x=root->data;
        
        root->data=a+b;
        
        return x+a+b;
    }
    void toSumTree(Node *node)
    {
        // Your code here
        solve(node);
    }
};