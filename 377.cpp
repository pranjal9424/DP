class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& a) {
        //code here
        map<string,vector<string>> m;
        
        for(int i=0;i<a.size();i++){
            string s=a[i];
            sort(s.begin(),s.end());
            m[s].push_back(a[i]);
        }
        
        vector<vector<string> > ans(m.size());
        
        int idx=0;
        
        for(auto x:m){
            auto v = x.second;
            
            for(int i=0;i<v.size();i++){
                ans[idx].push_back(v[i]);
            }
            idx++;
        }
        return ans;
    }
    
    
};