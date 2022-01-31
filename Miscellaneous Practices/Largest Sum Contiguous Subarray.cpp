#include<bits/stdc++.h>
using namespace std;

// Now we try to do this in O(n) + more optimization
int kadanesSum(int arr[], int n){
  int com_sum = 0;
  int max_sum = INT_MIN;
  for(int i=0; i<n; i++){
    com_sum = com_sum + arr[i];
    if(com_sum > max_sum){
      max_sum = com_sum;
    }
    if(com_sum < 0){
      com_sum = 0;
    }
  }
  return max_sum;
}

int main(){
  int arr[]={-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n=sizeof(arr)/sizeof(int);
  int maxSum = kadanesSum(arr, n);
  cout<< maxSum;
  return 0;
}