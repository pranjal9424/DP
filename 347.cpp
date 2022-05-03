#include<bits/stdc++.h>
using namespace std;
class Edge{
    public:
    int source;
    int dest;
    int weight;
};
bool campare(Edge e1,Edge e2){
    return e1.weight < e2.weight;
}

int frindParent(int v,int *parent){
    if(parent[v]==v){
        return v;
    }
    return frindParent(parent[v],parent);
}
void krushkal(Edge *input,int V,int E){
    // sort Edge weight accordingly ( asc order)  ;
    sort(input,input+E,campare);
    
    //take parent array in which we store parent info of node that will update accordingly
    int *parent=new int[V];
    for(int i=0;i<V;i++)
        parent[i]=i;
        
    Edge *output=new Edge[V-1];
    int count=0;
    int i=0;
    
    while(count != V-1){
        Edge currentEdge = input[i];
        
        // find parent of source and destination node 
        int sourceParent=frindParent(currentEdge.source,parent);
        int destParent=frindParent(currentEdge.dest,parent);
        
        
        //if source and destination having different destination then we will take that ednge in our output 
        if(sourceParent!=destParent){
            output[count]=currentEdge;
            count++;
            parent[sourceParent]=destParent;
        }
        i++;
    }
    
    for(int i=0;i<V-1;i++){
        if(output[i].source<output[i].dest){
            cout<<output[i].source<<" "<<output[i].dest<<" "<<output[i].weight<<endl;
        }
        else{
            cout<<output[i].dest<<" "<<output[i].source<<" "<<output[i].weight<<endl;
        }
    }
    
}

int main()
{
    int E,V;
    cin>>V>>E;
    
   Edge *input=new Edge[E];
   
   for(int i=0;i<E;i++){
       int s,d,w;
       cin>>s>>d>>w;
       input[i].source=s;
       input[i].dest=d;
       input[i].weight=w;
   }
   
   krushkal(input,V,E);
 
    return 0;
}


/*
input :- 
6 11
0 1 2
1 3 1
0 2 4
2 4 9
4 5 5
3 5 7
4 3 11
2 5 10
0 3 3
2 1 8
2 3 6

output :- 
1 3 1
0 1 2
0 2 4
4 5 5
3 5 7
*/