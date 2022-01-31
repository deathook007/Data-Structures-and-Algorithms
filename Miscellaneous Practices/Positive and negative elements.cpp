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
        int n;
        cin >> n;
        int a[n];
        // Seperate positive and negative numbers and print them ulternatily
        vector<int> v1, v2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                v2.push_back(a[i]);
            }
            else
                v1.push_back(a[i]);
        }
        for (int i = 0; i < n / 2; i++)
        {
            cout << v1[i] << " " << v2[i] << " ";
        }
        cout << endl;
    }
}