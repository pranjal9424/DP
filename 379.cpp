/*You are required to complete this function*/
struct node{
    int data;
    node* ar[2];
    bool rowEnd;
    node(int val)
    {
        data=val;
        ar[0]=NULL;
        ar[1]=NULL;
        rowEnd=false;
    }
};

void insert(node* root,int *arr,int col){
    
    for(int i=0;i<col;i++){
        int indx=arr[i];
        if(root->ar[indx]==NULL){
            root->ar[indx]=new node(arr[i]);
        }
        root=root->ar[indx];
    }
    root->rowEnd=true;
}

bool search(node* root,int *arr,int col){
    
    for(int i=0;i<col;i++){
        int indx=arr[i];
        if(root->ar[indx]==NULL){
            return false;
        }
        root=root->ar[indx];
    }
    return root->rowEnd;
}


vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
    
    vector<vector<int>> ans;
    
    node* root=new node('\0');
    
    for(int i=0;i<row;i++){
        if(!search(root,M[i],col)){
            insert(root,M[i],col);
            vector<int> rowUni(M[i], M[i]+col);
            ans.push_back(rowUni);
        }
    }
    return ans;
}