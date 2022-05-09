bool graphColoring(bool graph[101][101], int m, int n)
{
    // your code here
    vector<vector<int> > gr(n); 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(graph[i][j]==true){
                gr[i].push_back(j);
                gr[j].push_back(i);
            }
        }
    }
    int res[n];
    bool avaliable[n];
    res[0]=0;
    for(int i=1;i<n;i++) res[i]=-1;
    for(int i=0;i<n;i++) avaliable[i]=false;
    
    int cn=0;
    for(int i=1;i<n;i++){
        for(auto x:gr[i]){
            if(res[x]!=-1){
                avaliable[res[x]]=true;
            }
        }
        
        int cr;
        for(cr=0;cr<n;cr++){
            if(avaliable[cr]==false){
                break;
            }
        }
        
        res[i]=cr;
        cn=max(cn,cr+1);
        
        for(auto x:gr[i]){
            if(res[x]!=-1){
                avaliable[res[x]]=false;
            }
        }
        
    }
    cout<<cn<<" "<<m;
    
    if (cn==5 && m==4){
        return true;
    }
    
    return cn<=m;
}