class Solution{
  public:
    /*You are required to complete this method*/
    int ans=1;
    void solve(Node* root,int h,int &ma){
        if(!root) return;
        if(!root->left and !root->right){
            if(ma==-1)
                ma=h;
            else if(h!=ma)
                    ans=0;
            
            return;
        }
        solve(root->left,h+1,ma);
        solve(root->right,h+1,ma);
    }
    bool check(Node *root)
    {
        //Your code here
        int ma=-1;
        int h=0;
        
        solve(root,h,ma);
        if(ans==1) return true;
        return false;
    }
};