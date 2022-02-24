/* 
Bubble Sorting
Time Complexity : O(N^2) 
Best Complexity : O(N)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

void bubbleSorting(int arr[], int size){
    for(int i=0; i<size - 1; i++){
        bool temp = false;
        for(int j=0; j<size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                temp = true;
            }
        }
        if(temp == false){
            break;
        }
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