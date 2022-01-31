/* 
Move all zeros to the end of array
Approach - Using Indexing method
Time Complexity : O(N)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

void pushZerosToEnd(int arr[], int size){
    int count = 0;
	for(int i=0; i<size; i++){
	    if(arr[i] != 0){
	        arr[count++] = arr[i];
	    }
	}
	while(count < size){
	    arr[count++] = 0;
	}
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1, 0, 2, 3, 0, 0, 4, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    pushZerosToEnd(arr, n);
    return 0;
}
