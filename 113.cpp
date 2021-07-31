#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5] = { 2, 3, 6, 7, 9 };
    int b[4] = { 1, 4, 8, 10 };
    int k = 5;

    int m=5,n=4;
	int i=0,j=0,x=0;
	while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            x++;
            if(x==k)
            {
                cout<<a[i];
                return 0;
            }
            i++;
        }
        else
        {
            x++;
            if(x==k)
            {
                cout<<b[j];
                return 0;
            }
            j++;
        }
    }

        while(i<m){
            x++;
            if(x==k)
            {
                cout<<a[i];
                return 0;
            }
            i++;
        }
        while(j<n)
        {
            x++;
            if(x==k)
            {
                cout<<b[j];
                return 0;
            }
            j++;
        }
    return 0;
}

