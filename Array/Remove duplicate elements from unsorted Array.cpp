/* 
Remove duplicate elements from unsorted Array
Approach - Using unordered_map for hashing
Time Complexity : O(N)
Space Complexity : O(N)
*/
/* 
Remove duplicate elements from unsorted Array
Approach - Using unordered_map for hashing
Time Complexity : O(N)
Space Complexity : O(N)
*/
#include<bits/stdc++.h>
using namespace std;
void removeDuplicates(int arr[], int size){
    map<int, int> mpp;
    for(int i=0; i<size; i++){
        ++mpp[arr[i]];
    }
    for(auto it : mpp){
        cout<<it.first<<" ";
    }
}

int main(){
    int arr[] = {10, 20, 10, 30, 20, 40, 50, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    removeDuplicates(arr, n);
    return 0;
}