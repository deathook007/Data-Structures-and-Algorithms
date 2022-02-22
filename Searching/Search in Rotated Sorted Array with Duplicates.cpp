/* 
Search in a Rotated Array with Distinct Elements
Approach - Binary search (Non-Decreasing Sorted) and Leave Duplicates from End
Time Complexity : O(logN)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

bool searchRotatedArray(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        int middle = start + (end - start) / 2;
        if(arr[middle] == target){
            return true;
        }
        if(arr[middle] < arr[end]){
            if(target > arr[middle] && target <= arr[end]){
                start = middle + 1;
            }else{
                end = middle - 1;
            }
        }else if(arr[middle] > arr[end]){
            if(target < arr[middle] && target >= arr[start]){
                end = middle - 1;
            }else{
                start = middle + 1;
            }
        }else{
            end--;
        }
    }
    return false;
}


int main(){
    int arr[] = {5, 6, 7, 8, 8, 9, 10, 1, 1, 2, 3, 4};
    int target = 8;
    int n = sizeof(arr) / sizeof(arr[0]);
    bool result = searchRotatedArray(arr, n, target);
    if(!result){
        cout<<"Element is not present in array :(";
    }else{
        cout<<"Element is present in array :)";
    }
    return 0;
}