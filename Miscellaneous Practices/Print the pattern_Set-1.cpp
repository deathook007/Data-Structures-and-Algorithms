#include <bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        printPat(n);
        cout << endl;
    }
}

void printPat(int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = n;
        while (temp != 0)
        {
            for (int j = i; j < n; j++)
            {
                cout << temp << " ";
            }
            temp--;
        }
        cout << "$";
    }
}