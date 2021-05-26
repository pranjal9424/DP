#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    /// logic starting here
    int x=n/k;
    unordered_map<int,int>freq;

    for(int i=0;i<n;i++)
        freq[arr[i]]++;

    for(auto i:freq){
        if(i.second>x)
            cout<<"Number-"<<i.first<<endl<<"Count-"<<i.second;
    }

    return 0;
}
