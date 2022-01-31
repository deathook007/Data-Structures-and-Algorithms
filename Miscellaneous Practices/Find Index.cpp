#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> findIndex(int a[], int n, int key)
    {
        vector<int> v1;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == key)
            {
                v1.push_back(i);
                count++;
            }
        }
        if (count >= 2)
        {
            vector<int> v2;
            v2.push_back(v1.front());
            v2.push_back(v1.back());
            return v2;
        }
        else if (count == 2)
        {
            return v1;
        }
        else if (count == 1)
        {
            v1.push_back(v1.front());
            return v1;
        }
        else
        {
            v1.push_back(-1);
            v1.push_back(-1);
            return v1;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> res;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        res = ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << "\n";
    }

    return 0;
}