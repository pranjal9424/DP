vector<int> levelOrder(Node* node)
    {
        vector<int> v;
        
      queue <Node*> q;
      
      q.push(node);
      q.push(NULL);
      
      while(!q.empty()){
          Node* root=q.front();
          q.pop();
          
          if(root != NULL){
              v.push_back(root->data);
              if(root->left){
                  q.push(root->left);
              }
              if(root->right){
                  q.push(root->right);
              }
          }else if(!q.empty())
                    q.push(NULL);
      }
      
      return v;
    }