/* 
Two Sum / Key Pair Sum
Approach - Using HashMap
Time Complexity : O(N)
Space Complexity : O(N)
*/
#include<bits/stdc++.h>
using namespace std;
bool hasArrayTwoCandidates(int arr[], int size, int x) {
	unordered_map<int, int> mpp;
	for(int i=0; i<size; i++){
	    int findNum = x - arr[i];
	    if(mpp.find(findNum) != mpp.end()){
	        return true;
	    }else{
             mpp[arr[i]] = i;
        }
	}
	return false;
}

int main(){
    int arr[] = {1, 2, 4, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    cout<< hasArrayTwoCandidates(arr, n, target);
    return 0;
}