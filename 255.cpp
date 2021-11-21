public:void solve(int i,int j,vector<vector<int>> &a,int n,vector<string> &ans,string moves,vector<vector<int>> &vis,int di[],int dj[]){
    if(i==n-1 && j==n-1){
        ans.push_back(move);
        return;
    }
    string dir="DLRU";
    for(int ind=0;int<4;ind++)
}
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        vector<vector<int>> vis(n, vector<int> (n,0));
        int di[]={+1,0,0-1};
        int dj[]={0,-1,1,0};
        
        if(m[0][0]==1) solve(0,0,m,n,ans, "",vis,di,dj);
        return ans;
    }