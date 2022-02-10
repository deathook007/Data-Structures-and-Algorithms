/* 
Subarrays with sum K
Approach - Brute Force
Time Complexity : O(N^2)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int findSubArraySum(int arr[], int size, int findNum){
    int count = 0;
    for(int i=0; i<size; i++){
        int sum = 0;
        for(int j=i; j<size; j++){
            sum += arr[j];
            if(sum == findNum){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int arr[] = {10 , 2, -2, -20, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = -10;
    cout<< findSubArraySum(arr, n, k);
    return 0;
}

/* 
Subarrays with sum K
Approach - Using Hash Map
Time Complexity : O(N)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int findSubArraySum(int arr[], int size, int findNum){
    int sum = 0;
    int count = 0;
    unordered_map <int, int> mpp;
    for(int i=0; i<size; i++){
        sum += arr[i];
        if(sum == findNum){
            count++;
        }
        if(mpp.find(sum - findNum) != mpp.end()){
            count += mpp[sum - k];
        }
        mpp[sum]++;
    }
    return count;
}

int main(){
    int arr[] = {10 , 2, -2, -20, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = -10;
    cout<< findSubArraySum(arr, n, k);
    return 0;
}