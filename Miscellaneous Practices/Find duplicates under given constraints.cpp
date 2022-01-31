#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[10];
        for (int i = 0; i < 10; i++)
        {
            cin >> a[i];
        }
        int temp = a[0];
        for (int i = 0; i < 10; i++)
        {
            if (a[i] == a[i + 1])
            {
                temp = a[i];
                break;
            }
        }
        cout << temp << endl;
    }
}