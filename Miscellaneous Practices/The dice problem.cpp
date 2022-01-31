
// } Driver Code Ends

//User function Template for C++
class Solution
{
public:
    int oppositeFaceOfDice(int N)
    {
        return 7 - N;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.oppositeFaceOfDice(N);
        cout << ans << endl;
    }
    return 0;
} // } Driver Code Ends