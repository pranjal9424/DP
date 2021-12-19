#include <bits/stdc++.h>
using namespace std;
void solve(int n,int cnt,vector<int> ans,set<int> &s,vector<vector<int>> &v,int k){
    if(v.size()==k){
        return;
    }
    if(cnt==0){
        v.push_back(ans);
        return;
    }
    
    for(int i=1;i<=n;++i){
        if(s.count(i)==0){
            ans.push_back(i);
            s.insert(i);
            
            solve(n,cnt-1,ans,s,v,k);
            ans.pop_back();
            s.erase(s.find(i));
        }
    }
    return;
}
int main()
{
    set<int> s;
    int n,k,cnt=0;
    cin>>n>>k;
    cnt=n;
    vector<int> ans;
    vector<vector<int>> v;

    solve(n,cnt,ans,s,v,k);
    
    for(int i=0;i<n;i++){
        cout<<v[k-1][i];
    }
    return 0;
}
