/* 
Bubble Sorting
Time Complexity : O(Range + N)
Space Complexity : O(Range)
*/
#include<bits/stdc++.h>
using namespace std;

void countSorting(int arr[], int size){
    int largest = INT_MIN;
    for(int i=0; i<size; i++){
        largest = max(largest, arr[i]);
    }
    vector<int> v(largest + 1, 0);
    for(int i=0; i<size; i++){
        v[arr[i]]++;
    }
    int j = 0;
    for(int i=0; i<v.size(); i++){
        while(v[i]--){
            arr[j] = i;
            j++;
        }
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1, 4, 6, 8, 3, 5, 9, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    countSorting(arr, n);
    return 0;
}