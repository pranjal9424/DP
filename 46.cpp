#include<iostream>
using namespace std;
///gfg logic
int main()
{
    int n,m;
    cin>>m>>n;

    int mat[m][n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>mat[i][j];


    int col[m];
    int mn;
    int i;
    for (i = 0; i < m; i++)
        col[i] = n - 1;

    mn = 0;
    while (col[mn] >= 0) {
        for (i = 0; i < m; i++) {
            if (mat[i][col[i]] < mat[mn][col[mn]])
                mn = i;
        }
        int ec = 0;
        for (i = 0; i < m; i++) {
           if (mat[i][col[i]] > mat[mn][col[mn]]) {
                if (col[i] == 0){
                    cout<<"nOT found";
                    return 0;
                }

                col[i] -= 1;
            }
            else
                ec++;
        }
        if (ec == m){
            cout<<mat[mn][col[mn]];
            return 0;
        }
    }
    cout<<"nOT found";
}


/// leetcode logic here
/*
int findatleast(int n,int a, int* data)
{
    int low=0;
    int high=n-1;

    while(low<high){
        int mid=(low+high)/2;
        if(data[mid]==a)
            return a;
        else    if(data[mid]>a)
                    high=mid;
                else
                    low=mid+1;
    }
    return data[low];
}
int main()
{
    int n,m;
    cin>>n>>m;

    int mat[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>mat[i][j];

    int mx=INT_MIN;
    while(1){
        int total=0;
        for(int i=0;i<n;i++)
        {
            int result=findatleast(m,mx,mat[i]);
            if(result>mx){
                total=0;
                mx=result;
            }else   if(result==mx)
                        total++;
                    else{
                        cout<<mx;
                        return 0;
                    }
        }
        if(total==n-1){
            cout<<mx;
            return 0;
        }
    }
    return 0;
}
*/


/*

    input:- 4 5
            1 2 3 4 5
            2 4 5 8 10
            3 5 7 9 11
            1 3 5 7 9
   output:- 5
*/
