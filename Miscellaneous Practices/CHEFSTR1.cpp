#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, s, i, si, result = 0;
        cin >> n >> s;
        long long int a[n], b[n];
        for (i = 1; i < n; i++)
        {
            cin >> si;
            if (s < si)
                result = result + abs(s - si + 1);
            else
                result = result + abs(s - si - 1);
            s = si;
        }
        cout << result << endl;
    }
}