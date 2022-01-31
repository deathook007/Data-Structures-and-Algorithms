#include <bits/stdc++.h>
using namespace std;
main()
{
    int t, n, temp = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        temp = a[n - 1];
        for (int i = n - 1; i >= 1; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = temp;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}