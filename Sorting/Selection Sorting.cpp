/* 
Bubble Sorting
Time Complexity : O(N^2)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int size){
    for(int i=0; i<size - 1; i++){
        int current = arr[i];
        int min_pos = i;
        for(int j=i; j<size; j++){
            if(arr[j] < arr[min_pos]){
                min_pos = j;
            }
        }
        swap(arr[min_pos], arr[i]);
    }
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1, 4, 6, 8, 3, 5, 9, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    return 0;
}