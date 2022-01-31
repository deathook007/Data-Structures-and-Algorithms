/* 
Remove duplicate elements from sorted Array
Approach - Just maintain a separate index for same array
Time Complexity : O(N)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[], int size){
    if(size == 0 || size == 1){
        return size;
    }
    int j = 0;
    for(int i=0; i<size-1; i++){
        if(arr[i] != arr[i+1]){
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[size-1];
    return j;
}

int main(){
    int arr[] = {10, 10, 20, 20, 30, 40, 50, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int N = removeDuplicates(arr, n);
    for(int i=0; i<N; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}