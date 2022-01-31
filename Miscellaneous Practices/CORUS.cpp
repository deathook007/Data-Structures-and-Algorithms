#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        int a[26] = {0};
        for (int i = 0; i < s.length(); i++)
            a[s[i] - 'a']++;
        while (q--)
        {
            int c;
            cin >> c;
            int sum = 0;
            for (int i = 0; i < 26; i++)
            {
                if (a[i] > c)
                    sum = sum + (a[i] - c);
            }
            cout << sum << endl;
        }
    }
}