#include <iostream>
using namespace std;

int *Rearrange(int *arr, int n);

int main()
{
    //code

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int *b = Rearrange(a, n);
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }

    return 0;
} // } Driver Code Ends

int *Rearrange(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        // Check weather the array index contain index value or -1 if not then...
        if (arr[i] != -1 && arr[i] != i)
        {
            // store the value for further check
            int x = arr[i];
            // if the place to switch not contain x or -1 then...
            while (arr[x] != -1 && arr[x] != x)
            {
                // store that value in a variable and replace
                int temp = arr[x];
                arr[x] = x;
                x = temp;
            }
            // if the place contain -1 or index value then replace directly
            arr[x] = x;
            if (arr[i] != i)
                arr[i] = -1;
        }
    }
    return arr;
}
