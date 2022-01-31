#include <bits/stdc++.h>
using namespace std;
void rotate(int a[], int n, int d)
{
    int b[n], i;
    for (i = 0; i < n; i++)
    {
        int index = (i + n - d) % n;
        b[index] = a[i];
    }
    for (i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
}
main()
{
    int t, n, d, i;
    cin >> t;
    while (t--)
    {
        cin >> n >> d;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        rotate(a, n, d);
        cout << endl;
    }
}