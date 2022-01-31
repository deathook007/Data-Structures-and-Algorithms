#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], f[n + 1];
        for (int i = 0; i < n + 1; i++)
        {
            f[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            f[a[i]] = 1;
        }
        for (int i = 0; i < n + 1; i++)
        {
            if (f[i] == 0)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}