//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

class Solution
{
public:
    string is_palindrome(int n)
    {
        int sum = 0, temp, t = n;
        if (n < 0)
            n = -n;
        if (n == 0)
        {
            return "Yes";
        }
        while (n > 0)
        {
            temp = n % 10;
            sum = sum * 10 + temp;
            n = n / 10;
        }
        if (sum == t)
            return "Yes";
        else
            return "No";
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        Solution ob;
        string ans = ob.is_palindrome(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends