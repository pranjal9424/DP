bool solve(Node* root,int min,int max){
    if(!root) return false;
    if(min == max) return true;
    return solve(root->left,min,root->data-1) or solve(root->right,root->data+1,max);
}
bool isDeadEnd(Node *root)
{
    return solve(root,1,INT_MAX);
}