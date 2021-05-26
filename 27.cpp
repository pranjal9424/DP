#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int arr1[n];
    for(int i=0;i<n;i++)
        cin>>arr1[i];

    int arr2[m];
    for(int i=0;i<m;i++)
        cin>>arr2[i];

    //logic start from here o(n)
    int c=0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
        mp[arr1[i]]++;

    for(int i=0;i<m;i++)
        if(mp[arr2[i]])
            c++;

    if(c==m)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}

