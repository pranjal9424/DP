#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int target;
    cin>>target;


    ////logic started from here
    int x,c=0;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        x=target-arr[i];

        ///check no. hai ki ni
        if(m[x]==0){
            m[arr[i]]++;
        }
        else
        {
            c+=m[x];
            m[arr[i]]++;
        }
    }

    cout<<c;
}
