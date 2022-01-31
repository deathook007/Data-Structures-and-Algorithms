// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function template for C++

class Solution
{
public:
    int sumOfMatrix(int N, int M, vector<vector<int>> Grid)
    {
        int i, j;
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                sum += Grid[i][j];
            }
        }
        return sum;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> Grid(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
                cin >> Grid[i][j];
        Solution ob;
        cout << ob.sumOfMatrix(N, M, Grid) << "\n";
    }
} // } Driver Code Ends