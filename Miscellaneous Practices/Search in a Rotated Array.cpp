#include <bits/stdc++.h>
using namespace std;
int search(int arr[], int l, int h, int key)
{
    if (l > h)
        return -1;
    int mid = (l + h) / 2;
    if (arr[mid] == key)
        return mid;
    if (arr[l] <= arr[mid])
    {
        if (key >= arr[l] && key <= arr[mid])
            return search(arr, l, mid - 1, key);
        return search(arr, mid + 1, h, key);
    }
    if (key >= arr[mid] && key <= arr[h])
        return search(arr, mid + 1, h, key);
    return search(arr, l, mid - 1, key);
}

int main()
{
    int t, n, el;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> el;
        int i = search(a, 0, n - 1, el);
        if (i != -1)
            cout << i << endl;
        else
            cout << "-1" << endl;
    }
}
