#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int searchInSorted(int arr[], int N, int K)
    {
       long long first = 0, last = N - 1, middle = 0;
       while(first <= last)
       {
            middle = (first + last) / 2;
            if(arr[middle] == K){
                return 1;
            }else if(arr[middle] < K){
                first = middle + 1;
            }else if(arr[middle] > K){
                last = middle - 1;
            }
       }
       return -1;
    }
};

int main(void)
{

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;
    }
	return 0;
}
