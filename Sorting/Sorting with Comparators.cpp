/* 
Sorting with Comparators
Time Complexity : O(NlogN)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(){
    int arr[] = {1, 4, 6, 8, 3, 5, 9, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sort(arr, arr + n);
    cout<<"Elements shorted in ascending order : ";
    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    sort(arr, arr + n, cmp); // OR sort(arr, arr + n, greater<int>());
    cout<<"Elements shorted in descending order : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}