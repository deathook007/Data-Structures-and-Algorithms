/* 
Interpolation Searching
Approach - Mathematical Approach (For uniformly distributed data only!)
Time Complexity : O(log(log N))
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int interpolationSearching(int arr[], int size, int target){
	int low = 0;
    int high = size - 1;
    while(low <= high && arr[low] <= target && arr[high] >= target){
    if(low == high){
        if(arr[low] == target){
            return low + 1;
        }
        return -1;
    }
    int pos = low + (((target - arr[low])/(arr[high] - arr[low])) * (high - low));
    if(arr[pos] == target){
        return pos+1;
    }
    if(arr[pos] > target){
        high = pos - 1;
    }
    if(arr[pos] < target){
        low = pos + 1;
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5}; //Sorted
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    int result = interpolationSearching(arr, n, target);
    if(result == -1){
        cout<<"Element is not present in array!";
    }else{
        cout<<"Element is present at index "<<result;
    }
    return 0;
}