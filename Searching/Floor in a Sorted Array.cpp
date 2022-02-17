/*
Floor in a Sorted Array
Approach - Binary search
Time Complexity : O(logN)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

int findFloor(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        int middle = start + (end - start) / 2;
        if(arr[middle] < target){
            start = middle + 1;
        }else if(arr[middle] > target){
            end = middle - 1;
        }else{
            return middle;
        }
    }
    return end;
}


int main(){
    int arr[] = {1, 2, 8, 10, 11, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 0;
    cout<< findFloor(arr, n, X);
    return 0;
}