#include<bits/stdc++.h>
using namespace std;
#define V 4

int countTriangle(int graph[V][V],bool isDirected){
    int triangles=0;
    
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            for(int k=0;k<V;k++)
                if(graph[i][j] and graph[j][k] and graph[k][i])
                    triangles++;
        }
    }
    if(isDirected) return triangles/3;
    return triangles/6;
}

int main()
{
    int graph[][V] = { {0, 1, 1, 0},
                       {1, 0, 1, 1},
                       {1, 1, 0, 1},
                       {0, 1, 1, 0}
                     };
 

    int digraph[][V] = { {0, 0, 1, 0},
                        {1, 0, 0, 1},
                        {0, 1, 0, 0},
                        {0, 0, 1, 0}
                       };
 
    cout << "The Number of triangles in undirected graph : "
         << countTriangle(graph, false);
    cout << "\n\nThe Number of triangles in directed graph : "
         << countTriangle(digraph, true);
 
    return 0;
}