#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    vector<int> getTable(int N)
    {
        vector<int> v;
        for(int i=1; i<=10; i++){
            v.push_back(N*i);
        }
        return v;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> ans = ob.getTable(N);
        for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}