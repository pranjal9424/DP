#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar1[] = { 1, 5, 9, 10, 15, 20 };
    int ar2[] = { 2, 3, 8, 13 };
    int m = sizeof(ar1) / sizeof(ar1[0]);
    int n = sizeof(ar2) / sizeof(ar2[0]);

    for (int i=n-1;i>=0;i--)
    {
        int j, last = ar1[m - 1];
        for (j=m-2;j>=0 && ar1[j]>ar2[i];j--)
            ar1[j+1]=ar1[j];

        if (j!=m-2 || last>ar2[i])
        {
            ar1[j+1]=ar2[i];
            ar2[i]=last;
        }
    }
    for(int i=0;i<m;i++)
        cout<<ar1[i]<<" ";

    cout<<endl;

    for(int i=0;i<n;i++)
        cout<<ar2[i]<<" ";


    return 0;
}
