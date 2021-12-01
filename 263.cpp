#include <bits/stdc++.h>
using namespace std;
 
#define N 8
void printSolution(int sol[N][N])
{
    for (int x = 0; x < N; x++) {
        for (int y = 0; y < N; y++)
            cout <<sol[x][y] << " ";
        cout << endl;
    }
}
void knighttour(int chess[N][N],int r,int c,int move){
    if(r<0 || c<0 || r>=N || c>=N || chess[r][c]!=0){
        return;
    }
    if(move==N*N){
        chess[r][c]=move;
        printSolution(chess);
        return;
    }
    
    chess[r][c]=move;
    knighttour(chess,r-2,c+1,move+1);
    knighttour(chess,r-1,c+2,move+1);
    knighttour(chess,r+1,c+2,move+1);
    knighttour(chess,r+2,c+1,move+1);
    knighttour(chess,r+2,c-1,move+1);
    knighttour(chess,r+1,c-2,move+1);
    knighttour(chess,r-1,c-2,move+1);
    knighttour(chess,r-2,c-1,move+1);
    chess[r][c]=0;
}

// Driver Code
int main()
{
      int sol[N][N];
      for (int x = 0; x < N; x++)
        for (int y = 0; y < N; y++)
            sol[x][y] = 0;
    knighttour(sol,0,0,1);
    return 0;
}