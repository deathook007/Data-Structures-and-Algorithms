#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void swapKth(int *arr, int n, int k)
    {
        int t = arr[k - 1];
        arr[k - 1] = arr[(n - 1) - (k - 1)];
        arr[(n - 1) - (k - 1)] = t;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        ob.swapKth(arr, n, k);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
