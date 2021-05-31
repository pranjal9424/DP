#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;

    int arr[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>arr[i][j];


        int i=0,j=n-1;
    while(i<n && j>=0)
    {
        if(arr[i][j]==x)
        {
            cout<<i<<" "<<j;
            return 0;
        }else if(arr[i][j] < x)
                i++;
               else
                j--;
    }
    cout<<"NOT Found";

}

/*

        input:- 4 11
                1  2  3  4
                5  6  7  8
                9  10 11 12
                13 14 15 16
       output:- 2 2

        input:- 4 100
                10  20  30  40
                15  25  35  45
                27  29  37  48
                32  33  39  50
        outout:- NOT Found

*/
