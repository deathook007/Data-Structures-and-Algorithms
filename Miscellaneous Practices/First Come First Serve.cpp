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
        int n, k, f = 0;
        cin >> n >> k;
        int a[n];
        unordered_map<int, int> count_map;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            count_map[a[i]]++;
        }
        /* 
        UNORDERED MAP LOOKS LIKE - 
        1 -> 1
        7 -> 2
        4 -> 2
        3 -> 1
        8 -> 1
        */
        for (int i = 0; i < n; i++)
        {
            if (count_map[a[i]] == k)
            {
                cout << a[i] << endl;
                f = 1;
                break;
            }
        }
        if (f == 0)
            cout << -1 << endl;
    }
}