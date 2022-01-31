#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        string s;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 4 == 0)
            {
                if (s[i] == '0')
                    sum = sum + 0;
                else
                    sum = sum + 8;
            }
            if (i % 4 == 1)
            {
                if (s[i] == '0')
                    sum = sum + 0;
                else
                    sum = sum + 4;
            }
            if (i % 4 == 2)
            {
                if (s[i] == '0')
                    sum = sum + 0;
                else
                    sum = sum + 2;
            }
            if (i % 4 == 3)
            {
                if (s[i] == '0')
                    sum = sum + 0;
                else
                    sum = sum + 1;

                char c = sum + 97;
                cout << c;
                sum = 0;
            }
        }
        cout << endl;
    }

    return 0;
}