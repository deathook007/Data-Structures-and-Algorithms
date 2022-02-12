/* 
Exponential Seaching
Approach - Rise Exponentially and Divide in Middle
Time Complexity < O(logN)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

int binarySearching(int arr[], int start, int end, int target){
    while(start <= end){
        int middle = start + (end - start) / 2;
        if(arr[middle] == target){
            return middle + 1;
        }else if(arr[middle] > target){
            end = middle - 1;
        }else if(arr[middle] < target){
            start = middle + 1;
        }
    }
    return -1;
}

int exponentialSearching(int arr[], int size, int target) {
	if(arr[0] == target){
        return 1;
    }
    int i = 1;
    while(i<size && arr[i] <= target){
        i = i * 2;
    }
    return binarySearching(arr, i/2, min(i, size-1), target);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 ,12, 13, 14, 15}; //Sorted
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 13;
    int result = exponentialSearching(arr, n, target);
    if(result == -1){
        cout<<"Element is not present in array!";
    }else{
        cout<<"Element is present at index "<<result;
    }
    return 0;
}