class Solution
{
public:
    int c;
    void solve(Node* root1,Node* root2,int x){
        if(!root1) return;
        solve(root1->left,root2,x);
        if(fetch(root2,x-root1->data)) c++;
        solve(root1->right,root2,x);
    }
    bool fetch(Node* root,int k){
        if(!root) return false;
        
        if(root->data==k) return true;
        
        bool x,y;
        x=false;
        y=false;
        if(k<root->data) x=fetch(root->left,k);
        else if(k>root->data) x=fetch(root->right,k);
        
        return (x or y);
    }
    int countPairs(Node* root1, Node* root2, int x)
    {
        c=0;
        solve(root1,root2,x);
        return c;
    }
};