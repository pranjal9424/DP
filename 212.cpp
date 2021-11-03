void count_nodes(Node* root,int &n){
    if(!root) return;
    count_nodes(root->left,n);
    n++;
    count_nodes(root->right,n);
}
void func(Node* root,Node* &curr,Node* &prev,int &c,int x,int &f){
    if(!root) return;
    func(root->left,curr,prev,c,x,f);
    if(prev==NULL){
        prev=root;
        c++;
    }else if(c==x){
        c++;
        curr=root;
        f=1;
        return;
    }else   if(f==0){
        c++;
        prev=root;
    }
    
    func(root->right,curr,prev,c,x,f);
}

///start from here
float findMedian(struct Node *root)
{
      //Code here
      int n=0;
      count_nodes(root,n);
      
      Node* curr=NULL;
      Node* prev=NULL;
      
      int c=1;
      int x=(n/2)+1;
      
      int f=0;
      
      func(root,curr,prev,c,x,f);
      
      if(n&1){
          float ans=(curr->data)*1.0;
          
          return ans;
      }
      else{
          float ans=((curr->data + prev->data)*1.0)/(2*1.0);
          
          return ans;
      }
}s