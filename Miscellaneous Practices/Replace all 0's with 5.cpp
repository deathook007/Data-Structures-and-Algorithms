#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
} // } Driver Code Ends

/*you are required to complete this method*/
int convertFive(int n)
{
    int temp = n, sum = 0, i = 1;
    if (n == 0)
    {
        sum = sum + (5 * i);
    }
    while (n > 0)
    {
        if (n % 10 == 0)
        {
            sum = sum + (5 * i);
        }
        n = n / 10;
        i = i * 10;
    }
    return temp + sum;
}