class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       if(!root) return NULL;
       
       if(root->data==n1 or root->data==n2) return root;
       
       Node* l=lca(root->left,n1,n2);
       Node* r=lca(root->right,n1,n2);
       
       if(l and r) return root;
       if(l) return l;
       else return r;
    }
};