#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, count = 0;
        cin >> n >> x;
        int a[n];
        vector<int> v1, v2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                v1.push_back(i);
                count++;
            }
        }
        if (count == 0)
        {
            v2.push_back(-1);
        }
        if (count == 1)
        {
            v2.push_back(v1.front());
            v2.push_back(v1.front());
        }
        if (count >= 2)
        {
            v2.push_back(v1.front());
            v2.push_back(v1.back());
        }
        for (int i = 0; i < v2.size(); i++)
        {
            cout << v2[i] << " ";
        }
        cout << endl;
    }
}