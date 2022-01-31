#include <iostream>
#include <string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << PalinArray(a, n) << endl;
    }
} // } Driver Code Ends

/*Complete the function below*/
int PalinArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = a[i], rem = 0, sum = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            sum = sum * 10 + rem;
            temp = temp / 10;
        }
        if (sum != a[i])
            return 0;
    }
    return 1;
}