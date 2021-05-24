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

    /////brute force logic
    /*int s;
    for(int i=0;i<n-1;i++){
            s=0;
        for(int j=i;j<n;j++){
            s+=arr[j];
            if(s==0)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
                return 0;
                */


    /// best approach o(n)
    unordered_map<int ,int >m;

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==0 || m[sum])
        {
            cout<<"YES";
            return 0;
        }
        m[sum]++;
    }
    cout<<"NO";
            return 0;
}
