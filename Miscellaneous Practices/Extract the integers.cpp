#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, n, count;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        count = 0;
        string s;
        getline(cin, s);
        n = s.length();
        for (i = 0; i < n; i++)
        {
            if (s[i] > 47 && s[i] < 58)
            {
                cout << s[i];
                count = count + 1;
            }
            if ((s[i] > 47 && s[i] < 58) && !(s[i + 1] > 47 && s[i + 1] < 58))
            {
                cout << " ";
            }
        }
        if (count == 0)
        {
            cout << "No Integers";
        }
        cout << endl;
    }
    return 0;
}