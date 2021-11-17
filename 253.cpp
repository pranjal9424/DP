#include <bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;
 
struct key{
    int f;
    char ch;
    
    bool operator<(const key& k) const{
        return f < k.f;
    }
};
int rearrangeString(string str){
    int n=str.length();
    
    int count[MAX_CHAR]={0};
    
    priority_queue<key> pq;
    
    for(int i=0;i<n;i++)
        count[str[i]-'a']++;
        
    for(char ch='a';ch<='z';ch++){
        int val=ch-'a';
        if(count[val]){
            pq.push(key{count[val],ch});
        }
    }
    
    str="";
    key prev{-1,'#'};
    
    while(!pq.empty()){
        key k=pq.top();
        pq.pop();
        
        str = str + k.ch;
        if(prev.f>0)
            pq.push(prev);
        
        (k.f)--;
        
        prev=k;
    }if(n!=str.length()) return 0;
    return 1;
}
int main() {
	int t;
	cin>>t;
	
	while(t--){
	    string str;
	    cin>>str;
	    cout<<rearrangeString(str)<<endl;
	}
	return 0;
}