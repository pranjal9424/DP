int getCount(Node *root, int l, int h)
{
  // your code goes here   
  if(!root) return 0;
  
  if(root->data>=l and root->data<=h)
    return 1+getCount(root->left,l,h)+getCount(root->right,l,h);
else if(root->data<l) return getCount(root->right,l,h);
else getCount(root->left,l,h);
}