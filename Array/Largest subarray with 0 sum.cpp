/* 
Largest subarray with 0 sum
Approach - Using Hash Map
Time Complexity : O(N)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int findSubArraySum(int arr[], int size){
    int count = 0;
    int maxCount = 0;
    int sum = 0;
    unordered_map <int, int> mpp;
    for(int i=0; i<size; i++){
        sum += arr[i];
        if(sum == 0){
            maxCount = max(maxCount, i + 1);
        }
        if(mpp.find(sum) != mpp.end()){
            maxCount = max(maxCount, i - mpp[sum]);
        }else{
            mpp[sum] = i;
        }
    }
    return maxCount;
}

int main(){
    int arr[] = {15, -2, 2, -8, 1, 7, 10, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<< findSubArraySum(arr, n);
    return 0;
}