#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_set<ll> x, y;
        for (int i = 0; i < 4 * n - 1; i++)
        {
            ll m, n;
            cin >> m >> n;
            if (x.count(m))
                x.erase(m);
            else
                x.insert(m);
            if (y.count(n))
                y.erase(n);
            else
                y.insert(n);
        }
        cout << (*x.begin()) << " " << (*y.begin()) << endl;
    }
}
