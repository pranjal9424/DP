int height(struct Node* node){
        // code here 
        int n=1;
    
    queue<Node*> q;
    q.push(node);
    q.push(NULL);
    
    while(!q.empty()){
        Node* root=q.front();
        q.pop();
        
        if(root != NULL){
            if(root->left)
                q.push(root->left);
            if(root->right)
                q.push(root->right);
        }else{
            if(!q.empty()){
                q.push(NULL);
                n++;
            }
        }
    }
    return n;
    }