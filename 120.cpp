#include <iostream>
using namespace std;
int fesiblePainter(int* board,int n,int limit)
{
    int sum=0,painter=1;
    for(int i=0;i<n;i++)
    {
        sum+=board[i];
        if(sum>limit)
        {
            sum=board[i];
            painter++;
        }
    }
    return painter;
}
int main()
{
    int n=4;
    int board[]={10,20,30,40};
    int m=2;
    
    int total=0,k=0;
    for(int i=0;i<n;i++)
    {
        k=max(k,board[i]);
        total+=board[i];
    }
    int low=k;
    int high=total;
    while(low<high)
    {
        int mid=(low+high)/2;
        int painter=fesiblePainter(board,n,mid);
        if(painter<=m)
            high=mid;
        else
            low=mid+1;
    }
    cout<<low;
    return 0;
}
