/* 
Find the Missing Number
Approach - Reverse
Time Complexity : O(N logN)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int getMissingNo(int arr[], int size){
    sort(arr, arr + size);
    for(int i=0; i<size; i++){
        if(arr[i] != i){
            return i;
        }
    }
    return n;
}

int main(){
    int arr[] = {1, 2, 4, 6, 3, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<< getMissingNo(arr, n);
    return 0;
}

/* 
Find the Missing Number
Approach - Using Sum of n natural numbers
Time Complexity : O(N)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int getMissingNo(int arr[], int size){
    int totalSum = (size * (size + 1)) / 2;
    for(int i=0; i<size; i++){
        totalSum -= arr[i];
    }
    return totalSum;
}

int main(){
    int arr[] = {1, 2, 4, 6, 3, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<< getMissingNo(arr, n);
    return 0;
}
