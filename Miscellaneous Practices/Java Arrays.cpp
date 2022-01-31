#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int sum = 0;
        float avg = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        // Important to parse sum as float
        avg = (float)sum / n;
        printf("%d %.2f\n", sum, avg);
    }
}