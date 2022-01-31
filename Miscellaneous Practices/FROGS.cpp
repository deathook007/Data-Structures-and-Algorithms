#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll w[n], l[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> l[i];
        }
        if (n == 2)
        {
            if (w[0] == 1 && w[1] == 2)
            {
                cout << "0" << endl;
            }
            else
            {
                if (l[0] == 1)
                {
                    cout << "2" << endl;
                }
                else
                {
                    cout << "1" << endl;
                }
            }
        }
        else if (n == 3)
        {
            ll a, b, c, aa, bb, cc;
            ll count = 0;
            for (ll i = 0; i < n; i++)
            {
                if (w[i] == 1)
                {
                    a = i;
                    aa = i;
                }
                else if (w[i] == 2)
                {
                    b = i;
                    bb = i;
                }
                else if (w[i] == 3)
                {
                    c = i;
                    cc = i;
                }
            }
            while (c <= b || b <= a || c <= a)
            {
                while (b <= a)
                {
                    b += l[bb];
                    count++;
                }
                while (c <= b || c <= a)
                {
                    c += l[cc];
                    count++;
                }
            }
            cout << count << endl;
        }
        else if (n == 4)
        {
            ll a, b, c, d, aa, bb, cc, dd;
            ll count = 0;
            for (ll i = 0; i < n; i++)
            {
                if (w[i] == 1)
                {
                    a = i;
                    aa = i;
                }
                else if (w[i] == 2)
                {
                    b = i;
                    bb = i;
                }
                else if (w[i] == 3)
                {
                    c = i;
                    cc = i;
                }
                else if (w[i] == 4)
                {
                    d = i;
                    dd = i;
                }
            }
            while (c <= b || b <= a || c <= a || d <= a || d <= b || d <= c)
            {
                while (b <= a)
                {
                    b += l[bb];
                    count++;
                }
                while (c <= b || c <= a)
                {
                    c += l[cc];
                    count++;
                }
                while (d <= a || d <= b || d <= c)
                {
                    d += l[dd];
                    count++;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll w[n], l[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> l[i];
        }
        if (n == 2)
        {
            if (w[0] == 1 && w[1] == 2)
            {
                cout << "0" << endl;
            }
            else
            {
                if (l[0] == 1)
                {
                    cout << "2" << endl;
                }
                else
                {
                    cout << "1" << endl;
                }
            }
        }
        else if (n == 3)
        {
            ll a, b, c, aa, bb, cc;
            ll count = 0;
            for (ll i = 0; i < n; i++)
            {
                if (w[i] == 1)
                {
                    a = i;
                    aa = i;
                }
                else if (w[i] == 2)
                {
                    b = i;
                    bb = i;
                }
                else if (w[i] == 3)
                {
                    c = i;
                    cc = i;
                }
            }
            while (c <= b || b <= a || c <= a)
            {
                while (b <= a)
                {
                    b += l[bb];
                    count++;
                }
                while (c <= b || c <= a)
                {
                    c += l[cc];
                    count++;
                }
            }
            cout << count << endl;
        }
        else if (n == 4)
        {
            ll a, b, c, d, aa, bb, cc, dd;
            ll count = 0;
            for (ll i = 0; i < n; i++)
            {
                if (w[i] == 1)
                {
                    a = i;
                    aa = i;
                }
                else if (w[i] == 2)
                {
                    b = i;
                    bb = i;
                }
                else if (w[i] == 3)
                {
                    c = i;
                    cc = i;
                }
                else if (w[i] == 4)
                {
                    d = i;
                    dd = i;
                }
            }
            while (c <= b || b <= a || c <= a || d <= a || d <= b || d <= c)
            {
                while (b <= a)
                {
                    b += l[bb];
                    count++;
                }
                while (c <= b || c <= a)
                {
                    c += l[cc];
                    count++;
                }
                while (d <= a || d <= b || d <= c)
                {
                    d += l[dd];
                    count++;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}
