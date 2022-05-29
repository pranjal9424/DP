Node* LCA(Node* root, int a, int b){
    if(root==NULL) return NULL;
       if(root->data==a||root->data==b) return root;
       Node* left=LCA(root->left,a,b);
       Node* right=LCA(root->right,a,b);
       if(!left) return right;
       if(!right) return left;
       return root;
    
}

int distance(Node* root,int num,int dist){
       if(root==NULL) return -1;
       if(root->data==num) return dist;
       int left=distance(root->left,num,dist+1);
       if(left!=-1) return left;
       return distance(root->right,num,dist+1);
   }
   
    int findDist(Node* root, int x, int y) {
        // Your code here
       Node* lca=LCA(root,x,y);
       
       return distance(lca,x,0)+distance(lca,y,0);
    }