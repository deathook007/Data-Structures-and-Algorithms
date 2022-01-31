#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll compute(vector<char> u, vector<char> v);
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<string, vector<char>> m;
        string s;
        for (ll i = 0; i < n; i++)
        {
            cin >> s;
            if (s.length() > 0)
            {
                m[s.substr(1)].push_back(s[0]);
            }
        }
        ll count = 0;
        for (auto i : m)
        {
            for (auto j : m)
            {
                if (i.first != j.first)
                {
                    ll temp = compute(i.second, j.second);
                    count += (i.second.size() - temp) * (j.second.size() - temp);
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
ll compute(vector<char> u, vector<char> v)
{
    set<char> s(u.begin(), u.end());
    ll temp = 0;
    for (auto x : v)
    {
        if (s.find(x) != s.end())
        {
            temp++;
        }
    }
    return temp;
}