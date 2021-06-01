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
            /*
    //////  best approach
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(arr[j][i]==1){
                cout<<j;
                return 0;
            }

    cout<<"NO 1's in it";

    */
    //another approach
    int i,j=n-1;
    while(j>=0 && arr[0][j]==1)
        j--;
    int row=0;
    for(i=1;i<n;i++)
        while(j>=0 && arr[i][j]==1){
            j--;
            row=i;
        }
    cout<<row;
    return 0;
}


/*

    input:-     4
                0 1 1 1
                0 0 1 1
                1 1 1 1
                0 0 0 0
   output:-     2

    input:-     5
                0 0 0 1 1
                0 0 1 1 1
                0 0 0 0 0
                0 1 1 1 1
                0 0 0 0 1

   output:-     3
   */
