#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, i, coinof5 = 0, coinof10 = 0, coinof15 = 0, r = 0;
        cin >> n;
        long long int v[n];
        for (i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (i = 0; i < n; i++)
        {
            if (v[i] == 5)
                coinof5 = coinof5 + 5;
            else if (v[i] == 10)
            {
                coinof10 = coinof10 + 10;
                if (coinof5 >= 5)
                    coinof5 = coinof5 - 5;
                else
                    r = -1;
            }
            else if (v[i] == 15)
            {
                coinof15 = coinof15 + 15;
                if (coinof10 >= 10)
                    coinof10 = coinof10 - 10;
                else if (coinof5 >= 10)
                    coinof5 = coinof5 - 10;
                else
                    r = -1;
            }
        }
        if (v[0] != 5 || r == -1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
