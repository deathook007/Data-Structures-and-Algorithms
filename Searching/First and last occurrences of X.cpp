/* 
First and last occurrences of X
Approach - Binary search (Left half + Right half)
Time Complexity : O(logN)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> firstAndLast(int arr[], int size, int target){
    vector<int> v;
    int start = 0;
    int end = size - 1;
    int temp = -1;
    int middle;
    while(start <= end){
        middle = start + (end - start) / 2;
        if(arr[middle] == target){
            temp = middle;
            end = middle - 1;
        }else if(arr[middle] < target){
            start = middle + 1;
        }else if(arr[middle] > target){
            end = middle - 1;
        }
    }
    if(temp == -1){
        v.push_back(-1);
        return v;
    }
    v.push_back(temp);
    start = 0;
    end = size - 1;
    temp = -1;
    while(start <= end){
        middle = start + (end - start) / 2;
        if(arr[middle] == target){
            temp = middle;
            start = middle + 1;
        }else if(arr[middle] < target){
            start = middle + 1;
        }else if(arr[middle] > target){
            end = middle - 1;
        }
    }
    v.push_back(temp);
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