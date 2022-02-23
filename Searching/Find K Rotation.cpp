/* 
Search in a Rotated Array with Distinct Elements
Approach - Binary search (Start < End)
Time Complexity : O(logN)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

int findKRotation(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(star < end){
        int middle = start + (end - start) / 2;
        if(arr[middle] < arr[size - 1]){
            end = middle;
        }else if(arr[middle] >= arr[size - 1]){
            start = middle + 1;
        }
    }
    if(arr[start] < arr[0]){
        return start;
    }
    return 0;
}


int main(){
    int arr[] = {4, 5, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findKRotation(arr, n);
    cout<<"The array is rotated "<<result<<" times.";
    return 0;
}