class Solution {
public:

    void LeftTree(Node* root,vector<int> &ans){
        if(!root) return;
        
        if(root->left){
            ans.push_back(root->data);
            LeftTree(root->left,ans);
        }else if(root->right){
            ans.push_back(root->data);
            LeftTree(root->right,ans);
        }
    }
    
    void leaf(Node* root,vector<int> &ans){
        if(!root) return;
        
        leaf(root->left,ans);
        if(!root->left and !root->right) ans.push_back(root->data);
        leaf(root->right,ans);
    }
    
    void RightTree(Node* root,vector<int> &ans){
        if(!root) return;
        
        if(root->right){
            RightTree(root->right,ans);
            ans.push_back(root->data);
        }else if(root->left){
            RightTree(root->left,ans);
            ans.push_back(root->data);
        }
    }
    vector <int> printBoundary(Node *root)
    {
        vector<int> ans;
        ans.push_back(root->data);
        LeftTree(root->left,ans);
        leaf(root,ans);
        RightTree(root->right,ans);
        
        return ans;
    }
};