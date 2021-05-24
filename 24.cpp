#include<iostream>
#include <set>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    set<int> hashSet;
    for(int i=0;i<n;i++)
        hashSet.insert(arr[i]);

    int lcs=0;

    for(int i=0;i<n;i++)
    {
        if(!hashSet.count(arr[i]-1)){
            int currNum=arr[i];
            int currStreak=1;

            while(hashSet.count(currNum+1))
            {
                currNum+=1;
                currStreak+=1;
            }
            lcs=max(lcs,currStreak);
        }

    }

    cout<<lcs;
}
