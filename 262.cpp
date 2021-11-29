class Solution{
public:
    int dp[1001][1001];
    int subset(int arr[],int n,int sum){
        //cout<<sum<<" ";
        if(n==-1){
            if(sum==0) return 1;
            return 0;
        }
        if(sum==0) return 1;
        if(sum<0) return 0;
        
        
        if (dp[n][sum] != -1)
        return dp[n][sum];
        
        
        return dp[n][sum]= ( subset(arr,n-1,sum-arr[n]) || subset(arr,n-1,sum));
    }
    int equalPartition(int n, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<n;i++) sum+=arr[i];
        
        if(sum%2 != 0) return 0;
        dp[n][sum/2];
        memset(dp,-1,sizeof(dp));
        return subset(arr,n-1,sum/2);
        
    }
};