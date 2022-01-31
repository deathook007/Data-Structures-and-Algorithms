#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cin >> n;
    int a[n], sum[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        sum[i] = 0;

        while (a[i] != 0)
        {
            sum[i] = sum[i] + a[i] % 10;
            a[i] = a[i] / 10;
        }
        cout << sum[i] << endl;
    }
    // your code goes here
    return 0;
}
