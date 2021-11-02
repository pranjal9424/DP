class Solution
{
    public:
    int ans;
    void bstkthl(Node *root,int k,int &idx){
        if(!root) return;
        bstkthl(root->right,k,idx);
        if(k==idx){
            ans=root->data;
            idx++;
            return;
        }else idx++;
        bstkthl(root->left,k,idx);
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        int idx=1;
        ans=-1;
        bstkthl(root,K,idx);
        
        return ans;
    }
};