#include <bits/stdc++.h>
using namespace std;



// Main function to check whether possible to finish all tasks or not


bool solve(int src,int par,vector<int> &vis,vector<int> adj[]){
        vis[src]=1;
        for(auto x:adj[src]){
            if(!vis[x]){
                bool cyc=solve(x,src,vis,adj);
                if(cyc){
                    return true;
                }
            }else if(x!=par) return true;
        }
        return false;
    }
    
bool canFinish(int numTasks, vector<pair<int, int> >& prerequisites)
{
    vector<int> gra[1000];
    
    int V=0;
    for(int i=0;i<numTasks;i++){
        V=max(V,prerequisites[i].first);
        V=max(V,prerequisites[i].second);
        gra[prerequisites[i].first].push_back(prerequisites[i].second);
        gra[prerequisites[i].second].push_back(prerequisites[i].first);
    }
    
     vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                bool cyc=solve(i,-1,vis,gra);
                if(cyc){
                    return true;
                }
            }
        }
        return false;
    

}

int main()
{
	int numTasks = 4;

	vector<pair<int, int> > prerequisites;

	// for prerequisites: [[1, 0], [2, 1], [3, 2]]

	prerequisites.push_back(make_pair(1, 0));
	prerequisites.push_back(make_pair(0, 1));
	//prerequisites.push_back(make_pair(3, 2));
	if (canFinish(numTasks, prerequisites)) {
		cout << "Possible to finish all tasks";
	}
	else {
		cout << "Impossible to finish all tasks";
	}

	return 0;
}
