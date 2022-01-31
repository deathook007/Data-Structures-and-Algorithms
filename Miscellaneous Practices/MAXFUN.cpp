#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long int x = a[0], y = a[1], z = a[n - 1];
        cout << abs(x - y) + abs(y - z) + abs(z - x) << endl;
    }
}