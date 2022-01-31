#include <bits/stdc++.h>
using namespace std;
void splitArr(int arr[], int length, int rotation)
{
    int tmp[length * 2] = {0};
    for (int i = 0; i < length; i++)
    {
        tmp[i] = arr[i];
        tmp[i + length] = arr[i];
    }
    for (int i = rotation; i < rotation + length; i++)
    {
        arr[i - rotation] = tmp[i];
    }
}
int main()
{
    int t, n, k;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> k;
        splitArr(arr, n, k);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
        }
    }
}