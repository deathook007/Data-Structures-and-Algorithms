/* 
Jump Seaching
Approach - Sliding window Approach
Time Complexity : O(√N)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int jumpSearching(int arr[], int size, int target){
	int start = 0;
    int end = sqrt(size);
    while(arr[end] < target && end < size){
        start = end;
        end += sqrt(size);

        if(end > size - 1){
            end = size;
            }
    }
    for(int i = start; i<=end; i++){
        if(arr[i] == target){
            return i + 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5}; //Sorted
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    int result = jumpSearching(arr, n, target);
    if(result == -1){
        cout<<"Element is not present in array!";
    }else{
        cout<<"Element is present at index "<<result;
    }
    return 0;
}