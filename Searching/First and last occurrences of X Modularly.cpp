/* 
First and last occurrences of X
Approach - Binary search (Left half + Right half)
Time Complexity : O(logN)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

search(int arr[], int size, int target, bool findStartIndex){
    int start = 0;
    int end = size - 1;
    int temp = -1;
    int middle;
    while(start <= end){
        middle = start + (end - start) / 2;
        if(arr[middle] < target){
            start = middle + 1;
        }else if(arr[middle] > target){
            end = middle - 1;
        }else{
            temp = middle;
            if(findStartIndex){
                end = middle - 1;
            }else{
                start = middle + 1;
            }
        }
    }
    return temp;
}

vector<int> firstAndLast(int arr[], int size, int target){
    vector<int> v(2, -1);
    v[0] = search(arr, size, target, true);
    v[1] = search(arr, size, target, false);
    return v;
}


int main(){
    int arr[] = {1, 2, 3, 4, 4, 4, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 4;
    vector<int> v = firstAndLast(arr, n, X);
    cout<<"First occurrence is at Index: "<<v[0]<<" "<<"Last occurrence is at Index: "<<v[1];
    return 0;
}