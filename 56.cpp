#include<bits/stdc++.h>
using namespace std;
void sub(string t, int i, int n,string s)
{
    if(i==n){
        cout<<t<<endl;
    }else
    {
        sub(t,i+1,n,s);
        t=t+s[i];
        sub(t,i+1,n,s);
    }
}
int main()
{
    char seq[] = "abcd";
    int n = strlen(seq);
    sub("",0,n,seq);
    return 0;

}
