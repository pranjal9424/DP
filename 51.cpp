#include<bits/stdc++.h>
using namespace std;
///My approach
bool areRotate(string str1,string str2)
{
    if(str1.length() != str2.length())
        return false;

    int i=0;
    while(i<str1.length())
    {
        char temp;
        int j;
        temp=str1[0];
        for(j=0;j<str1.length()-1;j++)
        {
            str1[j]=str1[j+1];
        }
        str1[j]=temp;
        if((str1.compare(str2))==0)
            return true;
        i++;
    }
    return false;
}
////GFG APPEOACH
/*
bool areRotate(string str1,string str2)
{
    if(str1.length() != str2.length())
        return false;
    string temp;
    temp=str1+str2;
    return (temp.find(str2) != string::npos);
}*/
int main()
{
    string str1,str2;
    cin>>str1>>str2;

    if(areRotate(str1,str2))
        cout<<"YES";
    else
        cout<<"NO";
}


/*
        input:- str1 = "ABACD"
                str2 = "CDABA"
       output:- YES
*/
