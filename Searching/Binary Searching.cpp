/* 
Binary Seaching
Approach - Iterative Version (Divide in Middle)
Time Complexity : O(logN)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int binarySearching(int arr[], int size, int target) {
	int start = 0;
    int end = size - 1;
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

int main(){
    int arr[] = {1, 2, 3, 4, 5}; //Sorted
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    int result = binarySearching(arr, n, target);
    if(result == -1){
        cout<<"Element is not present in array!";
    }else{
        cout<<"Element is present at index "<<result;
    }
    return 0;
}

/* 
Binary Seaching
Approach - Recursive Version (Divide in Middle)
Time Complexity : O(log N)
Space Complexity : O(log N)
*/
#include<bits/stdc++.h>
using namespace std;
int binarySearching(int arr[], int start, int end, int target){
    if(start <= end){
        int middle = start + (end - start) / 2;
        if(arr[middle] == target){
            return middle + 1;
        }else if(arr[middle] > target){
            return binarySearching(arr, start, middle - 1, target);
        }else if(arr[middle] < target){
            return binarySearching(arr, middle + 1, end, target);
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5}; //Sorted
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    int result = binarySearching(arr, 0, n-1, target);
    if(result == -1){
        cout<<"Element is not present in array!";
    }else{
        cout<<"Element is present at index "<<result;
    }
    return 0;
}