#include <bits/stdc++.h>
using namespace std;
void solve(int arr[],int n,int vidx, vector<int> set1,vector<int> set2,int sumset1,int sumset2,int &mindiv,string &ans){
    if(vidx==n){
        int delta=abs(sumset1 - sumset2);
        if(delta<mindiv)
        {
            cout<<mindiv<<endl;
            mindiv=delta;
            
        }
        return;
    }
    //cout<<"H"<<endl;
    if(set1.size()<(n+1)/2){
        set1.push_back(arr[vidx]);
        solve(arr,n,vidx+1,set1,set2,sumset1+arr[vidx],sumset2,mindiv,ans);
        set1.pop_back();
    }
    
    if(set2.size()<(n+1)/2){
        set2.push_back(arr[vidx]);
        solve(arr,n,vidx+1,set1,set2,sumset1,sumset2+arr[vidx],mindiv,ans);
        set2.pop_back();
    }
}


int main()
{
    int arr[] = {23, 45, -34, 12, 0, 98, -99, 4, 189, -1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);


    vector<int> set1;
    vector<int> set2;
    int mindiv=INT_MAX;
    string ans="";
    solve(arr,n,0,set1,set2,0,0,mindiv,ans);

    return 0;
}
