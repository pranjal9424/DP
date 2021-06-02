#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    int mx=INT_MIN;
    for(int a=0;a<n-1;a++)
    for(int b=0;b<n-1;b++)
        for(int c=a+1;c<n;c++)
        for(int d=b+1;d<n;d++)
            if(mx<(arr[a][b]-arr[c][d]))
               mx=(arr[a][b]-arr[c][d]);

        cout<<mx;
    return 0;
}


/*
    input:-     5
                1   2   -1   -4   -20
                -8  -3  4    2    1
                3   8   6    1    3
                -4  -1  1    7    -6
                0   -4  10   -5   1

   output:-     18
*/

