/* 
Remove duplicates such that each unique element appears at most twice
Input: arr = [1 1 1 2 2 3 4 5 5 5]
Output: arr = [1 1 2 2 3 4 5 5]

Time Complexity : O(N)
Space Complexity : O(1)
*/

#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[], int size){
    if(size <= 2){
        return size;
    }
    int newArrayCount = 2;
    for(int i=2; i<size; i++){
        if (arr[i] != arr[newArrayCount - 2]){
            arr[newArrayCount] = arr[i];
            newArrayCount++;
        }
    }
    return newArrayCount;
}

int main(){
    int arr[] = {1, 1, 1, 2, 2, 3, 4, 5, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int N = removeDuplicates(arr, n);
    for(int i=0; i<N; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}