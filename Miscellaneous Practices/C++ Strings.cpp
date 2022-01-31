#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        int l1 = 0, l2 = 0, sum = 0;
        cin >> s1 >> s2;
        l1 = s1.length();
        l2 = s2.length();
        if (l1 > l2)
            cout << l1 << endl;
        else
            cout << l2 << endl;
        for (int i = 0; i < l1; i++)
        {
            cout << s1[i];
        }
        for (int i = 0; i < l2; i++)
        {
            cout << s2[i];
        }
        cout << endl;
    }
}