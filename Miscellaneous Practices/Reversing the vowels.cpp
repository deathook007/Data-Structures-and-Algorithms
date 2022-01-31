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
        vector<int> v;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                v.push_back(i);
            }
        }
        int size = v.size();
        for (int i = 0; i < size / 2; i++)
        {
            int temp = s[v[i]];
            s[v[i]] = s[v[size - i - 1]];
            s[v[size - i - 1]] = temp;
        }
        cout << s << endl;
    }
}
