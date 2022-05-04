void dfs(int i,int j,int oldcolor,int newColor,vector<vector<int>> &vis,vector<vector<int>>& image,int r,int c){
        if(i<0 or j<0 or i>=r or j>=c) return;
        if(vis[i][j] or image[i][j]!=oldcolor) return;
        vis[i][j]=1;
        image[i][j]=newColor;
        dfs(i,j+1,oldcolor,newColor,vis,image,r,c);
        dfs(i+1,j,oldcolor,newColor,vis,image,r,c);
        dfs(i-1,j,oldcolor,newColor,vis,image,r,c);
        dfs(i,j-1,oldcolor,newColor,vis,image,r,c);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int r=image.size();
        int c=image[0].size();
        
        vector<vector<int> > vis(r,vector<int>(c,0));
        int oldcolor=image[sr][sc];
        
        dfs(sr,sc,oldcolor,newColor,vis,image,r,c);
        return image;
    }