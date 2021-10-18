vector<int> leftView(Node *root)
{
   // Your code here
       // Your Code here
       vector<int> v;
       
        queue <Node*> q;
        if(!root) return v;
        q.push(root);
        
        while(!q.empty()){
            int n=q.size();
            v.push_back(q.front()->data);
            while(n--){
                Node* t=q.front();
                q.pop();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            
        }
        return v;
}