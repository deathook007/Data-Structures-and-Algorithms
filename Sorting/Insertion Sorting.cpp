/* 
Bubble Sorting
Time Complexity : O(N^2)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

void bubbleSorting(int arr[], int size){
    for(int i=1; i<size; i++){
        int temp = arr[i];
        int previous = i - 1;
        while(previous >= 0 && arr[previous] > temp){
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = temp;
    }
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1, 4, 6, 8, 3, 5, 9, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSorting(arr, n);
    return 0;
}