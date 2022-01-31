using namespace std;

// } Driver Code Ends

class Solution
{
public:
public:
    int find_median(vector<int> v)
    {
        sort(v.begin(), v.end());
        int n = v.size();
        if (n % 2 == 0)
        {
            return (v[n / 2] + v[n / 2 - 1]) / 2;
        }
        return v[n / 2];
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        Solution ob;
        int ans = ob.find_median(v);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends