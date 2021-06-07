#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n==1){ cout<<"1"; return 0;}
    if(n==2){ cout<<"11"; return 0;}
    string s="11";

    for(int i=3;i<=n;i++){
        string t="";
        s=s+'&';

        int c=1;
        for(int j=1;j<s.length();j++){
            if(s[j]!=s[j-1]){
                t=t+to_string(c);
                t=t+s[j-1];
                c=1;
            }
            else c++;
        }
        s=t;
    }
    cout<<s;
}
