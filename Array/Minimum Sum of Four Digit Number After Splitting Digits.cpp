/* 
Minimum Sum of Four Digit Number After Splitting Digits 
Time Complexity : O(N)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

int minimumSum(int num) {
    int arr[4];
    for(int i=0; i<4; i++){
        arr[i] = num%10;
        num = num/10;
    }
    sort(arr, arr+4);
    int a = arr[0] * 10 + arr[2];
    int b = arr[1] * 10 + arr[3];
    return a + b;
}

int main(){
    int num = 2932;
    cout<<minimumSum(num);
    return 0;
}