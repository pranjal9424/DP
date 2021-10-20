class Solution
{
    public:
    int f=1;
    
    int solve(Node* node){
        if(!node) return 0;
        
        if(!node->left and !node->right) return node->data;
        
        if(f==0)
            return 0;
        int a=solve(node->left);
        int b=solve(node->right);
        
        if(a+b != node->data) f=0;
        return a+b+node->data;
    }
    bool isSumTree(Node* root)
    {
         solve(root);
         if(f==1) return true;
         return false;
    }
};