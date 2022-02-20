/* 
Find triplets with zero sum 
Approach - Using Sorting and a little Trick
Time Complexity : O(N^2)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
bool findTriplets(int arr[], int size){
    sort(arr, arr + size);
    int c = size - 1;
    while(arr[c] != 0){
        int a = 0;
        int b = c - 1;
        while(a < b){
            if(arr[a] + arr[b] + arr[c] == 0){
                return true;
            }else if(arr[a] + arr[b] + arr[c] > 0){
                b--;
            }else{
                a++;
            }
        }
    }
    return false;
}

int main(){
    int arr[] = {0, -1, 2, -3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<findTriplets(arr, n);
    return 0;
}