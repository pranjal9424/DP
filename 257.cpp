class Solution{
public:
    vector<string> finalans;
    // rtrim of ans string
    string& rtrim(std::string &s)
    {
        auto it = std::find_if(s.rbegin(), s.rend(),[](char c) {
                        return !std::isspace<char>(c, std::locale::classic());
                    });
        s.erase(it.base(), s.end());
        return s;
    }
    
    //back tracking a
    void wordbreakfinal(string str,string ans,vector<string> dict){
        if(str.length()==0){
            rtrim(ans);
            finalans.push_back(ans);
            return;
        }
        int i;
        for( i=0 ;i<str.length();i++){
            string left=str.substr(0,i+1);
            
            if(find(dict.begin(), dict.end(), left) != dict.end()){
                string right=str.substr(i+1);
                wordbreakfinal(right,ans+left+" ",dict);
            }
        }
        
    }
    
    vector<string> wordBreak(int n, vector<string>& dict, string s)
    {
        wordbreakfinal(s,"",dict);
        return finalans;
    }
};