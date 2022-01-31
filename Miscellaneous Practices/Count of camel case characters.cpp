#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countCamelCase(string s)
    {
        int count = 0;
        for (int i = 0, n = s.length(); i < n; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                count++;
        }
        return count;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.countCamelCase(s) << '\n';
    }
}
