#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, d;
        cin >> n >> k >> d;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum = sum + a;
        }

        int x = sum / k;
        if (x >= d)
        {
            cout << d << "\n";
        }
        else
        {
            cout << x << "\n";
        }
    }
    return 0;
}
