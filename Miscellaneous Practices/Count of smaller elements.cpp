#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, num, count = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> num;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= num)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}