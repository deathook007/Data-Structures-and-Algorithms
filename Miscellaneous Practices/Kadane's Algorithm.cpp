#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxSubarraySum(int arr[], int n){
        int max_sum = INT_MIN;
        int cognitive_sum = 0;
        for(int i=0; i<n; i++){
            cognitive_sum += arr[i];
            if(cognitive_sum > max_sum){
                max_sum = cognitive_sum;
            }
            if(cognitive_sum < 0){
                cognitive_sum = 0;
            }
        }
        return max_sum;
    }
};

int main()
{
    int t,n;
    
    cin>>t;
    while(t--)
    {
        
        cin>>n;
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}