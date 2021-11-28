void solution(string s,int mxbrcketallow,vector<string> &ans){
        if(mxbrcketallow==0){
            int mbnow=getmin(s);
            if(mbnow==0){
                if(!(find(ans.begin(),ans.end(),s) != ans.end()))
                {
                    ans.push_back(s);
                    return;
                }
            }
        }
            
        for(int i=0;i<s.length();i++){
            string left=s.substr(0,i);
            string right=s.substr(i+1);
            
            solution(left+right,mxbrcketallow-1,ans);
            
        }
    }
    
    int getmin(string s){
         stack<char> st;
        
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='('){
                st.push(ch);
            }
            else if(ch==')'){
                if(st.size()==0){
                    st.push(ch);
                }else if(st.top()==')'){
                    st.push(ch);
                }else if(st.top()=='('){
                    st.pop();
                }
            }
        }
        return st.size();
    }
    vector<string> removeInvalidParentheses(string s) {
        int n=getmin(s);
        vector<string> ans;
        solution(s,n,ans);
        return ans;
    }