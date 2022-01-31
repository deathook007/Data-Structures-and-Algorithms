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
        for (int i = 0; i < s.size(); i++)
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = 'A' + s[i] - 'a';
            }
        cout << s << endl;
    }
    return 0;
}
