struct node{
    char data;
    node *ar[26];
    bool wordEnd;
    node(char ch){
        data=ch;
        for( int i = 0; i < 26; i++ ){
            ar[i] = NULL;
        }
        wordEnd=false;
    }
};

class Solution{
    public:
    // A : given string to search
    // B : vector of available strings
    
    void add(node *root, string s, int idx ){
    if( idx == s.size() ){
        root->wordEnd=true;
        return;
    }
    if( root->ar[s[idx]-'a'] == NULL ){
        root->ar[s[idx]-'a'] = new node(s[idx]);
    }
    
    add(root->ar[s[idx]-'a'], s, idx+1);
}
    
    bool search(node* root,string s){
        if(s.length()==0) {
            return root->wordEnd;
        }
        int indx=s[0]-'a';
        if(root->ar[indx]==NULL){
            return false;
        }
        return search(root->ar[indx],s.substr(1));
    }
    
    bool wordcheck(node* root,string s){
        if(s.length()==0) return true;
    
    for(int i=1;i<=s.length();i++){
        if(search(root,s.substr(0,i)) && wordcheck(root,s.substr(i,s.length()-1)))
            return true;
    }
    return false;
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
        node* root=new node('\0');
        
        for(int i=0;i<B.size();i++){
            add(root,B[i],0);
        }
        
        if(wordcheck(root,A)){
            return 1;
        }
        return 0;
    }
};