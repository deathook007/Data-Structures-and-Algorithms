#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    scanf("%lld", &t);
    while (t--)
    {
        ll n, q, m;
        scanf("%lld%lld%lld", &n, &q, &m);
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
        }
        int b[1000001] = {};
        map<pair<int, int>, int> map;
        while (q--)
        {
            ll l, r;
            scanf("%lld%lld", &l, &r);
            // 0 based indexing
            l--;
            r--;
            if (a[l] > m)
            {
                continue;
            }
            else if (a[l] <= m && a[r] > m)
            {
                b[a[l]]++;
                b[m + 1]--;
            }
            else
            {
                b[a[l]]++;
                b[m + 1]--;
                map[{a[l], a[r]}]++;
            }
        }
        for (auto x : map)
        {
            ll ai, bi, temp1, temp2;
            ai = x.first.first;
            bi = x.first.second;
            temp1 = x.second;
            b[bi + ai] = b[bi + ai] - temp1;
            b[bi + 2 * ai] = b[bi + 2 * ai] + temp1;
            temp2 = bi + 2 * ai;
            while (temp2 + bi <= m)
            {
                temp2 += bi;
                b[temp2] = b[temp2] - temp1;
                b[temp2 + ai] = b[temp2 + ai] + temp1;
                temp2 = temp2 + ai;
            }
        }
        int mx = 0;
        for (ll i = 1; i <= m; i++)
        {
            b[i] = b[i] + b[i - 1];
            mx = max(mx, b[i]);
        }
        cout << mx << endl;
    }
    return 0;
}
