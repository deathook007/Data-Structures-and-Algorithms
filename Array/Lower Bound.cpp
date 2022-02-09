/* 
lower Bound
Approach - Using Binary search algorithm
Time Complexity : O(N) or worst case O(N^2)
Space Complexity : O(N)
*/

#include<bits/stdc++.h>
using namespace std;

int lowerBound(int arr[], int size, int x){
  int lb = -1;
  int start = 0;
  int end = size - 1;
  while(start <= end){
    int mid = start + (end - start) / 2;
    if(arr[mid] > x){
      end = mid - 1;
    }
    else{
      lb = arr[mid];
      start = mid + 1;
    }
  }
  return lb;
}

int main(){
  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr)/sizeof(int);

  // Lower bound is applied on shorted array
  sort(arr, arr + n);

  int x = -3;
  int lb = lowerBound(arr, n, x);
  cout<<lb;
  return 0;
}