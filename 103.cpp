#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {5, 1, 3, 4, 7};
    int n = sizeof arr / sizeof arr[0];
    int sum = 12;

    sort(arr,arr+n);

    int ans = 0;
    for(int i=0;i<n-2;i++)
    {
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            int s=arr[i]+arr[j]+arr[k];
            if(s<sum)
            {
                ans+=(k-j);
                j++;
            }
            else
                k--;
        }
    }
    cout<<ans;
}
