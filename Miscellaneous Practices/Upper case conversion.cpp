#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        for (int i = 1; i < s.length() - 1; i++)
        {
            if (s[i] == ' ' && s[i + 1] != ' ')
                s[i + 1] = s[i + 1] - 32;
        }
        if (s[0] == ' ' && s[1] != ' ')
            s[1] = s[1] - 32;
        if (s[0] != ' ')
            s[0] = s[0] - 32;
        cout << s << endl;
    }
}