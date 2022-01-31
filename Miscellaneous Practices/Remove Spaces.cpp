#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore(); // Clearing the buffer and take enputs continously!
    while (t--)
    {
        string s;
        getline(cin, s);
        for (int i = 0; s[i]; i++)
        {
            if (s[i] != ' ')
                cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}