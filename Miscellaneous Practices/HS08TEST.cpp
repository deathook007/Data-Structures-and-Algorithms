#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x;
    double y, t, m;
    cin >> x >> y;
    t = y - 0.5;
    if (x % 5 == 0 && x <= t)
    {
        m = t - x;
        cout << fixed << setprecision(2) << m;
    }
    else
        cout << fixed << setprecision(2) << y;
    return 0;
}
