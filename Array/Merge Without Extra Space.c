/* 
Merge Without Extra Space
Time Complexity : O((N+M)log(N+M))
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m){ 
    int gap = ceil((float)(m + n) / 2);
    while(gap > 0){
        int i = 0;
        int j = gap;
        while(j < (m + n)){
            if(j < n && arr1[i] > arr1[j]){
                swap(arr1[i], arr1[j]);
            }else if(i < n && j >= n && arr1[i] > arr2[j - n]){
                swap(arr1[i], arr2[j - n]);
            }else if(i >= n && j >= n && arr2[i - n] > arr2[j - n]){
                swap(arr2[i - n], arr2[j - n]);
            }
            i++;
            j++;
        }
        if(gap == 1){
            gap = 0;
        }else{
            gap = ceil((float)gap / 2);
        }
    }
}

int main(){
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {0, 2, 6, 8, 9};
    int n, m;
    n = sizeof(arr1) / sizeof(arr1[0]);
    m = sizeof(arr2) / sizeof(arr2[0]);
    merge(arr1, arr2, n, m);
    for(int i=0; i<n; i++){
        cout<<arr1[i]<<" ";
    }
    for (int i=0; i<m; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    return 0;
}