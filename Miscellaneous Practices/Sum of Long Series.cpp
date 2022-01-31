#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long seriesSum(int n)
    {
        long long int sum = (long long int)n * (long long int)(n + 1) / 2;
        return (sum);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.seriesSum(n);
        cout << ans << "\n";
    }
    return 0;
}