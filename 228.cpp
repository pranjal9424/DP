#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<pair<int,int> > v;
    int n,fond;
    cin>>n;
    cin>>fond;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++) v.push_back({arr[i],i+1});
    
    sort(v.begin(),v.end());
    
    int st=0;
    for(int i=0;i<n;i++){
        int price=v[i].first;
        int qnt=v[i].second;
        if(price*qnt <= fond){
            st+=qnt;
            fond -=price*qnt;
        }
        else{
            st+=(fond/price);
            fond-=(price*(fond/price));
        }
        
    }
    cout<<st;
    return 0;
}
