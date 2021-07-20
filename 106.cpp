#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num[] = {10, 3, 5, 6, 2};
    int n = sizeof num / sizeof num[0];
    
    int l[n],r[n];
    
    l[0]=1;
    r[n-1]=1;
    
    for(int i=1;i<n;i++)
    {
        l[i]=l[i-1]*num[i-1];
        //cout<<l[i]<<" ";
    }
    for(int i=n-2;i>=0;i--)
    {
        r[i]=r[i+1]*num[i+1];
        //cout<<r[i]<<" ";
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<l[i]*r[i]<<" ";
    }
}
