class Solution
{
    public:
    
    void findmax(string str,int k,int idx,string &max){
    
        if(k==0) return;
    
        char maxchar=str[idx];
        for(int i=idx+1;i<str.length();i++)
        {
            if(maxchar<str[i])
                maxchar=str[i];
    
        }
        
        if(maxchar!=str[idx]) k--;
        
        for(int i=str.length()-1;i>=idx;i--){

                if(str[i]==maxchar){
                    swap(str[idx],str[i]);
                    if(max<str) max=str;
                    findmax(str,k,idx+1,max);
                    swap(str[i],str[idx]);
                }
            }
        }
    
    string findMaximumNum(string str, int k)
    {
       // code here
       string max=str;
       findmax(str,k,0,max);
       return max;
    }
};