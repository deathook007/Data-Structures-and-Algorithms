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
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < s.length() - i; j++)
            {
                cout << s[j];
            }
            cout << endl;
        }
    }
}