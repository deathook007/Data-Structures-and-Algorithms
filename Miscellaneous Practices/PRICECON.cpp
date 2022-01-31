#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, c = 0, pi;
        cin >> n >> k;
        for (long long int i = 0; i < n; i++)
        {
            cin >> pi;
            if (pi > k)
                c = c + (pi - k);
        }
        cout << c << endl;
    }
}
