#include <iostream>
using namespace std;
int bincnt(string str)
{
    int c0=0,c1=0;
    int cnt=0;
    int i=0;
    while(str[i])
    {
        if(str[i]=='0')
            c0++;
        else if(str[i]=='1')
            c1++;
        if(c1==c0)
            cnt++;
        i++;
    }
    return cnt;
}
int main()
{
    string str;
    cin>>str;

    cout<<bincnt(str);
    return 0;
}
