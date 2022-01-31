#include <bits/stdc++.h>
using namespace std;

void scores(long long a[], long long b[], int &ca, int &cb);

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        long long int a[5], b[5], i = 0;
        int ca = 0, cb = 0;
        for (i = 0; i < 3; i++)
            cin >> a[i];

        for (i = 0; i < 3; i++)
            cin >> b[i];

        scores(a, b, ca, cb);

        cout << ca << " " << cb << endl;
    }
    return 0;
}

void scores(long long a[], long long b[], int &ca, int &cb)
{
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
            ca++;
        else if (a[i] < b[i])
            cb++;
    }
}