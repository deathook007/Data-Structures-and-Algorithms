#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        ll l = lower_bound(a.begin(), a.end(), x) - a.begin();
        ll ct = 0;
        for (int i = l; i < n; i++)
        {
            if (x < a[i])
            {
                while (x < a[i])
                {
                    x = 2 * x;
                    ct++;
                }
                ct++;
            }
            else
                ct++;
            x = 2 * a[i];
        }
        ll p = l + ct;
        if (l != 0)
        {
            ct = 0;
            l--;
            for (int i = l; i < n; i++)
            {
                if (x < a[i])
                {
                    while (x < a[i])
                    {
                        x = 2 * x;
                        ct++;
                    }
                    ct++;
                }
                else
                    ct++;
                x = 2 * a[i];
            }
            if (ct + l < p)
                cout << ct + l << "\n";
            else
                cout << p << "\n";
        }
        else
            cout << p << "\n";
    }
}
