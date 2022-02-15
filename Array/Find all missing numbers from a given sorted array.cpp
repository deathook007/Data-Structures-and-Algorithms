/* 
Find the Missing Number
Approach - Keeping Track of Temp(Temparary Index)
Time Complexity : O(N)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
void printMissingElements(int arr[], int size){
    int temp = 0;
    for(int i=arr[0]; i<=arr[size - 1]; i++){
        if(arr[temp] == i){
            temp++;
        }else{
            cout<<i<<" ";
        }
    }
}

int main(){
    int arr[] = {5, 10, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    printMissingElements(arr, n);
    return 0;
}
