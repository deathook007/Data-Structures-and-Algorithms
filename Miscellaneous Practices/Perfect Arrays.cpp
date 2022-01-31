#include <bits/stdc++.h>
using namespace std;

bool IsPerfect(int a[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (IsPerfect(a, n))
            cout << "PERFECT\n";
        else
            cout << "NOT PERFECT\n";
    }
}

bool IsPerfect(int a[], int n)
{
    int f = 1;
    for (int i = 0; i <= n / 2; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            f = 0;
            break;
        }
    }
    if (f == 1)
        return 1;
    else
        return 0;
}
