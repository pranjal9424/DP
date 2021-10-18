class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> v;
       
        queue <Node*> q;
        q.push(root);
        
        while(!q.empty()){
            Node* t;
            int n=q.size();
            
            while(n--){
                t=q.front();
                q.pop();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            v.push_back(t->data);
        }
        return v;
    }
};