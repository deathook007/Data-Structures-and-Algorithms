#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int i, ts, js, c = 0;
        cin >> ts;
        while (ts % 2 == 0 && ts > 1)
        {
            ts = ts / 2;
        }
        for (i = 2; i < ts; i = i + 2)
            c++;
        if (ts <= 1)
            cout << "0" << endl;
        else
            cout << c << endl;
    }
}