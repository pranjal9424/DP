class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool camp(pair<int,int> a,pair<int,int> b){
        if(a.second==b.second) return a.first<b.first;
        
        return a.second<b.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code herev
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++) v[i]={start[i],end[i]};
        
        sort(v.begin(),v.end(),camp);
        
        int i=0;
        int j=1;
        int c=1;
        
        while(j<n){
            if(v[i].second < v[j].first){
                c++;
                i=j;
                j++;
            }else {
                j++;
            }
        }
        return c;
    }
};