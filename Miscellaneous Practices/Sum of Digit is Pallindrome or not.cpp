#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int isDigitSumPalindrome(int N)
    {
        int sum = 0, sum2 = 0;
        while (N != 0)
        {
            int rem = N % 10;
            sum = sum + rem;
            N = N / 10;
        }
        int temp = sum;
        while (sum != 0)
        {
            int rem = sum % 10;
            sum2 = sum2 * 10 + rem;
            sum = sum / 10;
        }
        if (temp == sum2)
            return 1;
        else
            return 0;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}
