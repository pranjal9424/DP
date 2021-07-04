#include<bits/stdc++.h>
using namespace std;
void foursum(vector<int>& num,int target)
{
    int n=num.size();

    sort(num.begin(),num.end());

    for(int i=0;i<n-3;i++)
    {
        for(int j=0;j<n-2;j++)
        {
            int target2=target-num[j]-num[i];

            int f=j+1;
            int e=n-1;

            while(f<e){
                int two=num[f]+num[e];

                if(two<target2)f++;
                else if(two>target2)e--;
                else
                {
                    cout<<num[i]<<" "<<num[j]<<" "<<num[f]<<" "<<num[e];
                    return ;
                }
            }
            while(j+1<n && num[j+1]==num[j])++j;
        }
        while(i+1<n && num[i+1]==num[i])++i;
    }
    cout<<"not found";
    return ;

}
int main()
{
    vector<int> vect;
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
    vect.push_back(40);
    vect.push_back(1);
    vect.push_back(2);


    foursum(vect,91);
}
