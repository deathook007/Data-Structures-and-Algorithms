/* 
Find position of an element in a sorted array of infinite numbers
Approach - Jump and Search in a particular Window
Time Complexity : O(logN)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int binarySearching(int arr[], int start, int end, int target) {
    while(start <= end){
        int middle = start + (end - start) / 2;
        if(arr[middle] == target){
            return middle;
        }else if(arr[middle] > target){
            end = middle - 1;
        }else if(arr[middle] < target){
            start = middle + 1;
        }
    }
    return -1;
}

int findPos(int arr[], int target){
    int low = 0;
    int high = 1;
    int value = arr[0];
    while(value < target){
        low = high;
        high = 2 * high;
        value = arr[high];
    }
    return binarySearching(arr, low, high, target);
}


int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}; //Sorted and N cannot be taken
    int target = 16;
    int result = findPos(arr, target);
    if(result == -1){
        cout<<"Element is not present in array!";
    }else{
        cout<<"Element is present at index "<<result;
    }
    return 0;
}