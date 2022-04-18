#include <iostream>
using namespace std;

struct node{
    char data;
    node* ar[26];
    bool wordEnd;
    
    node(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            ar[i]=NULL;
        }
        wordEnd=false;
    }
};
void add(node* root,string s){
    if(s.length()==0){
        root->wordEnd=true;
        return;
    }
    
    int indx=s[0]-'a';
    
    if(root->ar[indx]==NULL){
        node* temp=new node(s[0]);
        root->ar[indx]=temp;
    }
    
    add(root->ar[indx],s.substr(1));
}

void displayContactsUtil(node *curNode, string prefix)
{
    // Check if the string 'prefix' ends at this Node
    // If yes then display the string found so far
    if (curNode->wordEnd)
        cout << prefix << endl;
  
    // Find all the adjacent Nodes to the current
    // Node and then call the function recursively
    // This is similar to performing DFS on a graph
    for (char i = 'a'; i <= 'z'; i++)
    {
        node *nextNode = curNode->ar[i-'a'];
        if (nextNode != NULL)
            displayContactsUtil(nextNode, prefix + (char)i);
    }
}
  
// Display suggestions after every character enter by
// the user for a given query string 'str'
void displayContacts(node* root,string str)
{
    node* prevNode=root;
    string prefix = "";
    int len = str.length();
  
    // Display the contact List for string formed
    // after entering every character
    int i;
    for (i=0; i<len; i++)
    {
        // 'prefix' stores the string formed so far
        prefix += (char)str[i];
  
        // Get the last character entered
        int lastChar = prefix[i]-'a';
  
        // Find the Node corresponding to the last
        // character of 'prefix' which is pointed by
        // prevNode of the Trie
        node *curNode = prevNode->ar[lastChar];
  
        // If nothing found, then break the loop as
        // no more prefixes are going to be present.
        if (curNode == NULL)
        {
            cout << "nNo Results Found for " << prefix
                 << endl;
            i++;
            break;
        }
  
        // If present in trie then display all
        // the contacts with given prefix.
        cout << "nSuggestions based on " << prefix
             << " are"<<endl;
        displayContactsUtil(curNode, prefix);
  
        // Change prevNode for next prefix
        prevNode = curNode;
    }
  
    // Once search fails for a prefix, we print
    // "Not Results Found" for all remaining
    // characters of current query string "str".
    for (; i<len; i++)
    {
        prefix += (char)str[i];
        cout << "nNo Results Found for " << prefix
             << endl;
    }
}



bool search(node* root,string s){
    if(s.length()==0){
        return root->wordEnd;
        
    }
    
    int indx=s[0]-'a';
    
    if(root->ar[indx]==NULL){
        return false;
    }
    
    return search(root->ar[indx],s.substr(1));
}
int main()
{
    node* root=new node('\0');
    
    add(root,"gforgeeks");
    add(root,"geeksquiz");
    
    string query = "gekk";
  
    // Note that the user will enter 'g' then 'e', so
    // first display all the strings with prefix as 'g'
    // and then all the strings with prefix as 'ge'
    displayContacts(root,query);
    

    return 0;
}
