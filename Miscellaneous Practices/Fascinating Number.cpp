// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool fascinating(int n)
    {
        if (n == 192 || n == 219 || n == 273 || n == 327)
            return 1;
        else
            return 0;
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
        auto ans = ob.fascinating(n);
        if (ans)
        {
            cout << "Fascinating\n";
        }
        else
        {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}