/* 
Find in Mountain Array
Approach - Find Peak and Binary Search in two Halfs
Time Complexity : O(log N)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int findInMountainArray(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    int peak = start;
    start = 0; end = peak;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] < target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    start = peak + 1, end = size - 1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] > target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 3, 1}; //Sorted
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;
    cout<<"Target found at array Index : "<<findInMountainArray(arr, n, target);

    return 0;
}