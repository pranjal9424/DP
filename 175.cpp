class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> ans;
    	queue <Node*> q;
    	if(!root) return ans;
    	
    	q.push(root);
    	int f=1;
    	while(!q.empty()){
    	    int sz=q.size();
    	    vector<int> temp;
    	    
    	    while(sz--){
    	        Node* t=q.front();
    	        temp.push_back(t->data);
    	        q.pop();
    	        
    	        if(t->left) q.push(t->left);
    	        if(t->right) q.push(t->right);
    	    }
    	    if(f%2==0) reverse(temp.begin(),temp.end());
    	    for(int i=0;i<temp.size();i++) ans.push_back(temp[i]);
    	    f=!f;
    	}
    	return ans;
    }
};