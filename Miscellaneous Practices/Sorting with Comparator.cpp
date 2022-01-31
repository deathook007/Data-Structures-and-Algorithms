#include<bits/stdc++.h>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag){
  if(flag == true)
    sort(a.begin(), a.end());
  else
    sort(a.begin(), a.end(), greater<int>());
  return a;
}

int main(){
  vector<int> arr(5, 0);
  for(int i=0; i<5; i++){
    arr[i] = i+1;
  }
  vector<int> sorting = sortingWithComparator(arr, false);
  for(int i=0; i<5; i++){
    cout<<sorting[i]<<" ";
  }
}