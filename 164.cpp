vector<int> reverseLevelOrder(Node *root)
{
    vector<int> v;
    
    queue <Node*> q;
    stack <Node*> s;
    
    q.push(root);

    while(!q.empty()){
        Node* node=q.front();
        q.pop();
        s.push(node);
        
        if(node->right)
            q.push(node->right);
        if(node->left)
            q.push(node->left);
    }
    
    while(!s.empty()){
        Node* nod=s.top();
        v.push_back(nod->data);
        s.pop();
    }
    
    return v;
}