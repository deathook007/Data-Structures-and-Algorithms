// Expected Time Complexity: O(logN)
// Expected Auxiliary Space: O(1)

#include <bits/stdc++.h>
using namespace std;

int traillingZeros(int n){
  if(n<0){
    return -1;
  }
  int count = 0;
  for(int i=5; i<=n; i=i*5){
    count = count + n/i;
  }
  return count;
}

int main(){
  int n;
  cin>>n;
  int output = traillingZeros(n);
  cout<<output;
  return 0;
}