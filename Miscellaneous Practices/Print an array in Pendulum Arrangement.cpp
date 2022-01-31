#include <bits/stdc++.h>
using namespace std;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int mid = (n - 1) / 2;
        b[mid] = a[0];
        int i = 1, j = 1;
        for (i = 1; i <= mid; i++)
        {
            b[mid + i] = a[j++];
            b[mid - i] = a[j++];
        }
        if (n % 2 == 0)
        {
            b[mid + i] = a[j];
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}