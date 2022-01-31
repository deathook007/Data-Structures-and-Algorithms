#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    swap(a[i], a[j]);
                }
            }
        }
        for (int i = 0; i < n - 2; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}