class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    static bool camp(Job a,Job b){
        return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,camp);
        
        bool done[n]={0};
        int day=0,profit=0;
        
        for(int i=0;i<n;i++){
            for(int j=min(n,arr[i].dead-1);j>=0;j--){
                if(done[j]==false){
                    day+=1;
                    profit+=arr[i].profit;
                    done[j]=true;
                    break;
                }
            }
        }
        return {day,profit};
    } 
};