Node* inpre(Node* root){
    Node* p=root->left;
    while(p->right) p=p->right;
    
    return p;
}


Node* insuc(Node* root){
    Node* p=root->right;
    while(p->left) p=p->left;
    
    return p;
}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

if(!root) return;

if(root->key == key){
if(root->left) pre=inpre(root);
if(root->right) suc=insuc(root);

return ;
}
if(key> root->key){
    pre=root;
    findPreSuc(root->right,pre,suc,key);
}else if(key<root->key){
    suc = root;
    findPreSuc(root->left,pre,suc,key);
}
}