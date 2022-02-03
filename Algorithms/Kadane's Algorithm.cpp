/* 
Kadane's Algorithm
Time Complexity : O(N)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int size){
    int curr_sum = 0;
    int max_sum = INT_MIN;
    for(int i=0; i<size; i++){
        curr_sum = curr_sum + arr[i];
        if(curr_sum>max_sum){
            max_sum = curr_sum;
        }
        if(curr_sum<0){
            curr_sum = 0;
        }
    }
    return max_sum;
}

int main(){
    int arr[] = {1, 2, -3, 4, 5, 6, -7, -8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<maxSubarraySum(arr, n);
    return 0;
}