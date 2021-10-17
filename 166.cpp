logic 1 O(squr(n)) time complexity
int diameter(Node* root) {
        // Your code here
        if(root==NULL)
            return 0;
            
        int lHeight=calHeight(root->left);
        int rHeight=calHeight(root->right);
        
        int curDiameter=lHeight+rHeight+1;
        
        int lDiameter=diameter(root->left);
        int rDiameter=diameter(root->right);
        
        return max(curDiameter,max(lDiameter,rDiameter));
    }
    int calHeight(Node* root){
        if(root == NULL)
            return 0;
            
        return max(calHeight(root->left),calHeight(root->right))+1;
    }
};


logic 2 O(n) time complexity
class Solution {
  public:
    // Function to return the diameter of a Binary Tree.\\\
    int calHeight()
    int ma;
    int func(Node* root){
        if(!root)
            return 0;
        
        int l=func(root->left);
        int r=func(root->right);
        
        ma=max(ma,l+r+1);
        
        return (max(l,r)+1);
    }
    
    int diameter(Node* root) {
        ma=INT_MIN;
        int x=func(root);
        return ma;
    }
};