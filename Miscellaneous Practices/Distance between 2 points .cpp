#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int distance(int x1, int y1, int x2, int y2)
    {
        int X = x2 - x1;
        int Y = y2 - y1;
        X = pow(X, 2);
        Y = pow(Y, 2);
        X = X + Y;
        double X1 = sqrt(X);
        return round(X1);
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        Solution ob;
        int ans = ob.distance(x1, y1, x2, y2);
        cout << ans << "\n";
    }
    return 0;
}