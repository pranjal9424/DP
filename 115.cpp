int solve(vector<int> arr,int mid,int n,int m){
    int stu=1;
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]>mid){
            sum=arr[i];
            stu++;
            if(stu>m || arr[i]>mid) return 0;
        }else sum+=arr[i];
    }
    
    return 1;
}
int allocateBooks(vector<int> arr, int n, int m) {
    // Write your code here.
    int e=0;
    int s=0;
    int ans=-1;
    
    for(int i=0;i<n;i++) e+=arr[i];
    while(s<=e){
        int mid=s+(e-s)/2;
        if(solve(arr,mid,n,m)){
            ans=mid;
            e=mid-1;
        }else s=mid+1;
    }
    return ans;
}