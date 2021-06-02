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
    int temp;
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
        int l,e;
        for(int i=0;i<n;i++)
        {
            l=0;
            e=n-1;
            while(l<e)
            {
                temp=arr[i][l];
                arr[i][l]=arr[i][e];
                arr[i][e]=temp;
                l++;
                e--;
            }

        }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<arr[i][j];
        cout<<endl;
    }
    return 0;
}


/*
    input:-     3
                1 2 3
                4 5 6
                7 8 9

   output:-     7 4 1
                8 5 2
                9 6 3
   */

