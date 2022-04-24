#include <bits/stdc++.h>
using namespace std;
struct node{
  char data;
  node* arr[26];
  bool wordEnd;
  
  node(char ch){
      data = ch;
      for(int i=0;i<26;i++){
          arr[i] = NULL;
      }
      wordEnd = false;
  }
 
};
//adding value in a trie func
void add(node* trie, string str){
    
    
    if(str.length()==0){
        trie->wordEnd=true;
        return;
    }
    
    int idx=str[0]-'a';
    
    if(trie->arr[idx]==NULL){
            node* temp = new node(str[0]);
            trie->arr[idx] = temp;
    }
    
    add(trie->arr[idx],str.substr(1));
    
   
    /*node* root= trie;
    
    for(int i=0;i<str.length();i++){
        int idx = str[i]-'a';//idx = 3(==d)
        
        
        // if data not present in trie EX- d not present we need to create new node and assing with parent node
        if(root->arr[idx]==NULL){
            node* temp = new node(str[i]);
            root->arr[idx] = temp;
        }
        
        // what else if data present we directly jump to next node
        root=root->arr[idx];
    }
    root->wordEnd = true;*/
    
}

bool search(node* trie, string str){
    
    
    if(str.length()==0){
        
        return trie->wordEnd;
    }
    
    int idx=str[0]-'a';
    
    if(trie->arr[idx]==NULL){
            return false;
    }
    
    return search(trie->arr[idx],str.substr(1));
    
    /*node* root= trie;
    
    for(int i=0;i<str.length();i++){
        int idx = str[i]-'a';//idx = 3(==d)
        
        
        // if data not present in trie EX- d not present we need to create new node and assing with parent node
        if(root->arr[idx]==NULL){
            return false;
        }
        
        // what else if data present we directly jump to next node
        root=root->arr[idx];
    }

    return root->wordEnd;*/
    
}
int main(){
    
    node* root=new node('\0');
    
    add(root,"aastha");
    add(root,"pranjal");
    add(root,"allu");
    add(root,"pingu");
    cout<<search(root,"pilngu");

    return 0;
}