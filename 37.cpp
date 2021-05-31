#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>arr[i][j];


    int mnc=0;
    int mnr=0;
    int mxc=m-1;
    int mxr=n-1;
    int i,j;
    int totl=n*m;
    int c=0;
    while(c<totl)
    {
        //for top wall print
        for(i=mnr,j=mnc;j<=mxc && c<totl;j++)
        {
            cout<<arr[i][j]<<" ";
            c++;
        }
        mnr++;

        //for right wall print
        for(i=mnr,j=mxc;i<=mxr && c<totl;i++)
        {
            cout<<arr[i][j]<<" ";
            c++;
        }
        mxc--;

        //for bottom wall print
        for(i=mxr,j=mxc;j>=mnc && c<totl;j--)
        {
            cout<<arr[i][j]<<" ";
            c++;
        }
        mxr--;

        //for left wall print
        for(i=mxr,j=mnc;i>=mnr && c<totl;i--)
        {
            cout<<arr[i][j]<<" ";
            c++;
        }
        mnc++;
    }
    return 0;
}


/*
    input :-    4 4
                1  2  3  4
                5  6  7  8
                9  10 11 12
                13 14 15 16
    output:-    1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

    input :-    3 6
                1  2  3  4  5  6
                7  8  9  10 11 12
                13 14 15 16 17 18
    output:-    1 2 3 4 5 6 12 18 17 16 15 14 13 7 8 9 10 11
*/


