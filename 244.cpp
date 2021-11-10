#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int w,h,n;
        cin>>w>>h>>n;
        vector<int> a;
        vector<int> b;
        
        a.push_back(0);
        b.push_back(0);
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            a.push_back(x);
            b.push_back(y);
        }
        a.push_back(w+1);
        b.push_back(h+1);
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        int mw=0,mh=0;
        for(int i=0;i<n;i++){
            mw=max(mw,a[i+1]-a[i]-1);
            mh=max(mh,b[i+1]-b[i]-1);
        }
        cout<<mw*mh<<endl;
    }
    

    return 0;
}
