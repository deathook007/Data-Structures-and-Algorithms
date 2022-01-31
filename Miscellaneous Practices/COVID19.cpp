#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, i, k = 0, count = 0;
        cin >> n;
        long long int a[n], arr[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] <= 2)
            {
                count++;
            }
            else
            {
                arr[k++] = count;
                count = 0;
            }
        }
        arr[k++] = count;
        sort(arr, arr + k);
        cout << arr[0] + 1 << " " << arr[k - 1] + 1 << endl;
    }
    return 0;
}