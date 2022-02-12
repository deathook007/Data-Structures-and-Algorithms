/* 
Count 1’s in a sorted binary array
Approach - Binary Searching until found the last 1
Time Complexity < O(logN)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

int countOnes(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        int middle = start + (end - start) / 2;
        if(arr[middle] < 1){
            end = middle - 1;
        }else if(arr[middle] > 1){
            start = middle + 1;
        }else{
            if(middle == size - 1 || arr[middle + 1] == 0){
                return middle + 1;
            }else{
                start = middle + 1;
            }    
        }
    }
}

int main(){
    int arr[] = {1, 1, 1, 1, 0 , 0}; //Sorted
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = countOnes(arr, n);
    cout<<result;
    return 0;
}