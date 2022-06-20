bool canMeasureWater(int x, int y, int z) {
        if(x+y < z){
            return false;
        }
        int dx[]={x,-x,y,-y};
        
        map<int,int>vis; 
        
        queue<int> q;
        
        q.push(0);
        vis[0]=1;
        
        while(!q.empty()){
            int a = q.front();
            q.pop();
            if(a==z) return true;
            for(int i=0;i<4;i++){
                int node=a+dx[i];
                if(node==z){
                    return true;
                }
                if(node<0 || node>x+y)
                    continue;
                if(vis[node]==0){
                    q.push(node);
                    vis[node]=1;
                }
            }
        }
        return false;
        
    }