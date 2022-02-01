/* 
Juggling Algorithm
Time Complexity : O(N)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int findgcd(int a, int b){
    if(b == 0){
        return a;
    }else{
        return findgcd(b, a % b);
    }
}

void rotateArray(int arr[], int size, int rotateBy){
    int gcd = findgcd(size, rotateBy);
    for(int i=0; i<gcd; i++){
        int temp = arr[i];
        int j = i;
        while(true){
            int k = j + rotateBy;
            if(k >= size){
                k = k - size;
            }
            if(k == i){
                break;
            }
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 3;
    d = d % n;
    rotateArray(arr, n, d);
    return 0;
}