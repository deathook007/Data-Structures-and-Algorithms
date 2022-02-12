/* 
Linear Seaching
Approach - Iterative Version
Time Complexity : O(N)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int linearSearching(int arr[], int size, int target) {
	for(int i=0; i<size; i++){
        if(arr[i] == target){
            return i + 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 4, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    int result = linearSearching(arr, n, target);
    if(result == -1){
        cout<<"Element is not present in array!";
    }else{
        cout<<"Element is present at index "<<result;
    }
    return 0;
}

/* 
Linear Seaching
Approach - Recursive Version
Time Complexity : O(N)
Space Complexity : O(N)
*/
#include<bits/stdc++.h>
using namespace std;
int linearSearching(int arr[], int size, int target){
	if(size == 0){
        return -1;
    }else{
        if(arr[size - 1] == target){
            return size;
        }else{
            linearSearching(arr, size - 1, target);
        }
    }
}

int main(){
    int arr[] = {1, 2, 4, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    int result = linearSearching(arr, n, target);
    if(result == -1){
        cout<<"Element is not present in array!";
    }else{
        cout<<"Element is present at index "<<result;
    }
    return 0;
}