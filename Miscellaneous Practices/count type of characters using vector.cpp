//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<int> count(string s)
    {
        int lc = 0, uc = 0, sc = 0, nv = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 97 && s[i] <= 122)
                lc++;
            else if (s[i] >= 65 && s[i] <= 90)
                uc++;
            else if (s[i] >= 48 && s[i] <= 57)
                nv++;
            else
                sc++;
        }
        return {uc, lc, nv, sc};
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        vector<int> res = ob.count(s);
        for (int i : res)
            cout << i << '\n';
    }
}

// } Driver Code Ends