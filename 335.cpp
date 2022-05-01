void solve(int i,int j,vector<vector<int>> &vis,vector<vector<int>> &m,int n,string s,vector<string> &ans){
        if(i<0 or j<0 or i>=n or j>=n) return;
        if(m[i][j]==0 or vis[i][j]==1) return;
        if(i==n-1 and j==n-1){
            ans.push_back(s);
            return;
        }
        vis[i][j]=1;
        
        solve(i-1,j,vis,m,n,s+'U',ans);
        solve(i,j+1,vis,m,n,s+'R',ans);
        solve(i+1,j,vis,m,n,s+'D',ans);
        solve(i,j-1,vis,m,n,s+'L',ans);
        
        vis[i][j]=0;
        
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        
        vector<vector<int>> vis(n, vector<int> (n, 0));
        vector<string> ans;
        ans.clear();
        if(m[0][0]==0 or m[n-1][n-1]==0) return ans;
        
        solve(0,0,vis,m,n,"",ans);
        
        sort(ans.begin(),ans.end());
        return ans;
    }