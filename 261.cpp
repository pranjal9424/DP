#include<bits/stdc++.h>

using namespace std;
bool palindrome(string str){
    int s=0;
    int l=str.length()-1;
    
    while(s<l){
        if(str[s]!=str[l]) return false;
        s++;
        l--;
    }
    return true;
}

void soltuion(string str,string ans)
{
    if(str.length()==0) {
        cout<<ans<<endl;
        return;
    }
    
    for(int i=0;i<str.length();i++){
        string prefix=str.substr(0,i+1);
        string row=str.substr(i+1);
        if(palindrome(prefix)){
            soltuion(row,ans+"("+prefix+") ");
        }
    }
}
int main()
{
    soltuion("nitin","");

    return 0;
}
