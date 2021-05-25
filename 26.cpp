#include<iostream>
#include <set>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int price[n];
    for(int i=0;i<n;i++)
        cin>>price[i];

    int profit=0;

    for(int i=1;i<n;i++)
    {
        int sub=price[i]-price[i-1];
        if(sub>0)
            profit+=sub;
    }

    cout<<profit;
}
