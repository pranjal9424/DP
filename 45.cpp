#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int Counter(vector<vector<int> >&mat,int k,int mid)
{
    int c=0;
    int row=mat.size();
    int cols=mat[0].size();
    int j=cols-1;

    for(int i=0;i<row;i++)
    {
        for( j;j>=0;j--)
        {
            if(mat[i][j]<=mid)
            {
                c+=j+1;
                break;
            }
        }
    }
    return c;
}

int kthsmallest(vector<vector<int> >&mat,int k)
{
    int row=mat.size();
    int cols=mat[0].size();

    int l=mat[0][0];
    int h=mat[row-1][cols-1];

    while(l<h)
    {
        int mid=(h+l)/2;

        int cnt=Counter(mat,k,mid);
        if(cnt>=k)
            h=mid;
        else
            l=mid+1;
    }
    return l;
}

int main()
{
    vector<vector<int> > vect
    {
        { 10, 20, 30, 40 },
        { 15, 25, 35, 45 },
        { 25, 29, 37, 48 },
        { 32, 33, 39, 50 }
    };

    cout<<kthsmallest(vect,7);
    return 0;
}
