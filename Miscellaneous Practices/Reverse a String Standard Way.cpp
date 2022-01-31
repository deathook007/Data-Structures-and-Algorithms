#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string revStr(string S)
    {
        for (int i = 0, n = S.length(); i < n / 2; i++)
        {
            char temp;
            temp = S[i];
            S[i] = S[n - i - 1];
            S[n - i - 1] = temp;
        }
        return S;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.revStr(S) << endl;
    }
    return 0;
}