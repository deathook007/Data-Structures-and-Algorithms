#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length(), t;
        for (int i = 0; i < n; i++)
        {
            t = i + 1;
            for (int j = i; j < n; j++)
            {
                cout << s[j];
            }
            cout << endl;
            while (t-- && t != n - 1)
            {
                cout << ".";
            }
        }
    }
}