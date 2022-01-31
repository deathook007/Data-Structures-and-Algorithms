#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int i = 0, c = 0;
        string str;
        cin >> str;
        for (int j = 0; j < 500; j++)
        {
        }
        while (i < str.length() - 1)
        {
            if (str[i] != str[i + 1])
            {
                c++;
                i = i + 2;
            }
            else
                i = i + 1;
        }
        cout << c << endl;
    }
}