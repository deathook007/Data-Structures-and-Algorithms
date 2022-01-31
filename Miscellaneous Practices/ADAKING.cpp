#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char count[8][8];
        count[0][0] = 'O';
        n--;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (i == 0 && j == 0)
                    continue;
                if (n)
                {
                    count[i][j] = '.';
                    n--;
                }
                else
                {
                    count[i][j] = 'X';
                }
            }
        }
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cout << count[i][j];
            }
            cout << endl;
        }
    }
}
