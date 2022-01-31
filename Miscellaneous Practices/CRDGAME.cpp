#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
            int x1 = 0, y1 = 0;
            while (a[i])
            {
                x1 += a[i] % 10;
                a[i] /= 10;
            }
            while (b[i])
            {
                y1 += b[i] % 10;
                b[i] /= 10;
            }
            if (x1 > y1)
            {
                x++;
            }
            else if (x1 < y1)
            {
                y++;
            }
            else
            {
                x++;
                y++;
            }
        }
        if (x > y)
        {
            cout << 0 << " ";
        }
        else if (x < y)
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 2 << " ";
        }
        cout << max(x, y) << endl;
    }
}
