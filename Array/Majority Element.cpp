/* 
Majority Element > N/2
Approach - Using unordered_map
Time Complexity : O(N) or worst case O(N^2)
Space Complexity : O(N)
*/
#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int size){
    unordered_map <int, int> mpp;
    for(int i=0; i<size; ++i){
        int count = ++mpp[arr[i]];
        if(count > size/2){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    int arr[] = {3, 1, 3, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<majorityElement(arr, n);
    return 0;
}
/* 
Majority Element > N/2
Approach - Mores Voting Algorithm
Time Complexity : O(N)
Space Complexity : O(1)
*/
int majorityElement(int arr[], int size){
    int count = 0;
    int candidate = 0;
    for(int i=0; i<size; i++){
        if(count == 0){
            candidate = arr[i];
        }
        if(candidate == arr[i]){
            count++;
        }else{
            count--;
        }
    }
    count = 0;
    for(int i=0; i<size; i++){
        if(arr[i] == candidate){
            count++;
        }
    }
    if(count > size/2){
        return candidate;
    }else{
        return -1;
    }
}

int main(){
    int arr[] = {3, 1, 3, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<majorityElement(arr, n);
    return 0;
}
