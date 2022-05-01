#include <bits/stdc++.h>
using namespace std;
#define maxN 100000
vector<int> graph[maxN];
 
// Array to store the in-degree of node
int indegree[maxN];
 
// Array to store the time in which
// the job i can be done

 
// Function to add directed edge
// between two vertices
void addEdge(int u, int v)
{
    // Insert edge from u to v
    graph[u].push_back(v);
 
    // Increasing the indegree
    // of vertex v
    indegree[v]++;
}
 
// Function to find the minimum time
// needed by each node to get the task
vector<int> printOrder(int n, int v)
{
    vector<int> job(v,0);
    queue<int> q;
    
    for(int i=1;i<=n;i++){
        if(indegree[i]==0){
            q.push(i);
            job[i]=1;
        }
    }
    
    
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        
        for(auto  x:graph[curr]){
            indegree[x]--;
            if(indegree[x]==0){
                job[x]=job[curr]+1;
                q.push(x);
            }
        }
    }
  return job;
}
 
// Driver Code
int main()
{
    // Given Nodes N and edges M
    int n, m;
    n = 10;
    m = 13;
 
    // Given Directed Edges of graph
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(1, 5);
    addEdge(2, 3);
    addEdge(2, 8);
    addEdge(2, 9);
    addEdge(3, 6);
    addEdge(4, 6);
    addEdge(4, 8);
    addEdge(5, 8);
    addEdge(6, 7);
    addEdge(7, 8);
    addEdge(8, 10);
 
    vector<int> ans;
    ans=printOrder(n, m);
    
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
    cout << "\n";
    return 0;
}