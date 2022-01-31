#include <bits/stdc++.h>
using namespace std;

int max_sum(int A[], int N);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        cout << max_sum(A, N) << endl;
        /*keeping track of the total sum of the array*/
    }
}
// } Driver Code Ends

/*You are required to complete this method*/

int max_sum(int A[], int N)
{
    int cum_sum = 0;
    for (int i = 0; i < N; i++)
        cum_sum += A[i];
    int curr_val = 0;
    for (int i = 0; i < N; i++)
        curr_val += i * A[i];
    int res = curr_val;
    for (int i = 1; i < N; i++)
    {
        int next_val = curr_val - (cum_sum - A[i - 1]) + A[i - 1] * (N - 1);
        curr_val = next_val;
        res = max(res, next_val);
    }

    return res;
}