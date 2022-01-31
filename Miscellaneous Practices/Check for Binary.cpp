#include <bits/stdc++.h>
using namespace std;

bool isBinary(string str);

// Driver program to test above functions
int main()
{
    string str;
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        cin >> str;
        cout << isBinary(str) << endl;
    }
    return 0;
}
// } Driver Code Ends

// Return true if str is binary, else false
bool isBinary(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] != '0' && str[i] != '1'))
            return 0;
    }
    return 1;
}