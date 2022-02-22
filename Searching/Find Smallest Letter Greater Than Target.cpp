/* 
Find Smallest Letter Greater Than Target
Approach - Binary search (Non-Decreasing Sorted)
Time Complexity : O(logN)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

char nextGreatestLetter(char arr[], int size, char target){
    int start = 0;
    int end = size - 1;
    if(target > arr[end]){
        return arr[start];
    }
    while(start <= end){
        int middle = start + (end - start) / 2;
        if(arr[middle] == target){
            start = middle + 1;
        }else if(arr[middle] < target){
            start = middle + 1;
        }else{
            end = middle - 1;
        }
    }
    if(start == size){
        start = 0;
    }
    return arr[start];
}


int main(){
    char arr[] = {'c', 'f' ,'j'};
    char c = 'a';
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Smallest character larger than target is : "<<nextGreatestLetter(arr, n, c);
    return 0;
}