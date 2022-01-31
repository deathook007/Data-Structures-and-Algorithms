#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getMoreAndLess(int arr[], int n, int x)
    {
        int maxCount = 0, minCount = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= x)
                minCount++;
            if (arr[i] >= x)
                maxCount++;
        }
        v.push_back(minCount);
        v.push_back(maxCount);
        return v;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}