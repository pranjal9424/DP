#include<bits/stdc++.h>
using namespace std;
///My approach
bool interleaving(string str1,string str2,string res)
{
    int l=str1.length(),l2=str2.length(),lr=res.length();

    int i=0,j=0,k=0;
    while(k<lr)
    {
        if(i<l && str1[i]==res[k]) i++;
        else    if(j<l2 && str2[j]==res[k]) j++;
                else
                    return false;
        k++;
    }
    return true;
}
////GFG APPEOACH

int main()
{
    string str1,str2,res;
    cin>>str1>>str2;
    cin>>res;

    if(interleaving(str1,str2,res))
        cout<<"YES";
    else
        cout<<"NO";
}

/*
        input:- str1 = "12"
                str2 ="XY";
                res = "X12Y";
       output:- YES
*/

