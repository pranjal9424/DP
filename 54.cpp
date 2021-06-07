#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int l,h;

    int start=0,en=1;

    for(int i=1;i<str.length();i++)
    {
        ///for even string
        l=i-1;
        h=i;

        while(l>=0 && h<str.length() && str[l]==str[h])
        {
            if(h-l+1>en)
            {
                start=l;
                en=h-l+1;
            }
            l--;
            h++;
        }

        ///for odd string
        l=i-1;
        h=i+1;

        while(l>=0 && h<str.length() && str[l]==str[h])
        {
            if(h-l+1>en)
            {
                start=l;
                en=h-l+1;
            }
            l--;
            h++;
        }
    }

    for(int i=start;i<=start+en-1;i++)
        cout<<str[i];
}
