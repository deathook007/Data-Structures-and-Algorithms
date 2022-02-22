/* 
Search in a Rotated Array with Distinct Elements
Approach - Binary search (Non-Decreasing Sorted)
Time Complexity : O(logN)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

int searchRotatedArray(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        int middle = start + (end - start) / 2;
        if(arr[middle] == target){
            return middle;
        }
        if(arr[middle] < arr[end]){
            if(target > arr[middle] && target <= arr[end]){
                start = middle + 1;
            }else{
                end = middle - 1;
            }
        }else{
            if(target < arr[middle] && target >= arr[start]){
                end = middle - 1;
            }else{
                start = middle + 1;
            }
        }
    }
    return -1;
}


int main(){
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int target = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = searchRotatedArray(arr, n, target);
    if(result == -1){
        cout<<"Element is not present in array!";
    }else{
        cout<<"Element is present at index : "<<result;
    }
    return 0;
}