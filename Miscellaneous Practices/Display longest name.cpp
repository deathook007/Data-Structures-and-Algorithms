#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longest(string names[], int n)
    {
        int max = names[0].length(), f = 0;
        for (int i = 0; i < n; i++)
        {
            int s = names[i].length();
            if (s > max)
            {
                max = s;
                f = i;
            }
        }
        return names[f];
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string names[n];

        for (int i = 0; i < n; i++)
            cin >> names[i];
        Solution ob;
        cout << ob.longest(names, n) << endl;
    }
}
