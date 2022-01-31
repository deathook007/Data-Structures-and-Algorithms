/* 
Approach - Boyer Mores Voting Algorithm
Time Complexity : O(N)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
void majorityElement(int arr[], int size){
    int count1 = 0;
    int count2 = 0;
    int candidate1 = 0;
    int candidate2 = 0;
    for(int i=0; i<size; i++){
        if(count1 == 0){
            candidate1 = arr[i];
        }else if(count2 == 0){
            candidate2 = arr[i];
        }else if(candidate1 == arr[i]){
            count1++;
        }else if(candidate2 == arr[i]){
            count2++;
        }else{
            count1--;
            count2--;
        }
    }
    vector <int> v;
    count1 = 0;
    count2 = 0;
    for(int i=0; i<size; i++){
        if(arr[i] == candidate1){
            count1++;
        }else if(arr[i] == candidate2){
            count2++;
        }
    }
    if(count1 > size/3){
        v.push_back(candidate1);
    }
    if(count2 > size/3){
        v.push_back(candidate2);
    }
    if(v.size() == 0){
        cout<<"-1";
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    int arr[] = {10, 10, 20, 30, 10, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    majorityElement(arr, n);
    return 0;
}