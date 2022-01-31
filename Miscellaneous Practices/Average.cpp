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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = 0, avg = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            avg = sum / (i + 1);
            cout << avg << " ";
        }
        cout << endl;
    }
}