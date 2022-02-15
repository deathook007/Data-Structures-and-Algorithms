/* 
Find the Missing Number i`n Unsorted Array
Approach - Keeping Track of Temp(Temparary Index)
Time Complexity : O(N)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
void printMissingElements(int arr[], int size){
    for(int i=0; i<size; i++){
        int temp = abs(arr[i]) - 1;
        if(arr[temp] > 0){
            arr[temp] *= -1;
        }
    }
    for(int i=0; i<size; i++){
        if(arr[i] > 0){
            cout<<i+1<<" ";
        }
    }
}

int main(){
    int arr[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printMissingElements(arr, n);
    return 0;
}