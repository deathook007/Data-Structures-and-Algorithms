/*
Peak element
Approach - Binary search
Time Complexity : O(logN)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

int PeakElement(int arr[], int size){
    /* When only single element is present */
    if(size == 1){
        return 0;
    }
    /* When only increasing element is present */
    if(arr[0] > arr[1]){
        return 0;
    }
    /* When only decreasing element is present */
    if(arr[size - 1] > arr[size - 2]){
        return size - 1;
    }
    int low = 0;
        int high = size - 1;
        while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] < arr[mid + 1]){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return low;
}


int main(){
    int arr[] = {1, 2, 8, 10, 6, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Peak of mountain is at Index : "<<PeakElement(arr, n);
    return 0;
}