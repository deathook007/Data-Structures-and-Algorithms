#include <bits/stdc++.h>
using namespace std;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Here we get max sum of difference when we sub max to min
    // We have to make pairs of max and min

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        vector<int> v;
        if (true)
        {
            for (int i = 0; i < n / 2; i++)
            {
                v.push_back(a[i]);
                v.push_back(a[n - 1 - i]);
            }
            if (n % 2 == 1)
            {
                v.push_back(a[n / 2]);
            }
        }
        int res = 0;
        for (int i = 0; i < n - 1; i++)
        {
            res = res + abs(v[i + 1] - v[i]);
        }
        res = res + abs(v[0] - v[n - 1]);
        cout << res << endl;
    }
}