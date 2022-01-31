#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string conRevstr(string S1, string S2)
    {
        int n = S1.length() + S2.length();
        string S3;
        S3 = S1 + S2;
        for (int i = 0; i < n / 2; i++)
        {
            char temp;
            temp = S3[i];
            S3[i] = S3[n - i - 1];
            S3[n - i - 1] = temp;
        }
        return S3;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S1, S2;
        cin >> S1;
        cin >> S2;
        Solution ob;
        cout << ob.conRevstr(S1, S2) << endl;
    }
    return 0;
}