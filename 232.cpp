#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s,n,m;
    cin>>s>>n>>m;
    
    int x=s/7;
    int y=s-x;
    int buy=(s*m)/n;
    if((s*m)%n ==0) buy++;
    
    if(y>buy) cout<<"Yes";
    else cout<<"No";

    return 0;
}
