/* 
Complement (https://practice.geeksforgeeks.org/problems/complement3911/1/#)
Approach - Using Kadane's Algorithm
Time Complexity : O(N)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> complement(string s, int size){
    int l=0;
    int ans_l,ans_r;
    int maxDiff=0;
    int zeroCount = 0, oneCount = 0;
    for(int i=0; i<n; i++){
        if(str[i] == '0'){
            zeroCount++;
        }
        else oneCount++;
        if(zeroCount < oneCount){
            l=i+1;
            zeroCount = 0;
            oneCount = 0;
        }else{
            if(zeroCount - oneCount > maxDiff){
                ans_l = l;
                ans_r = i;
                maxDiff = zeroCount - oneCount;
            }
        }
    }
    if(maxDiff == 0) return {-1};
    return {ans_l + 1, ans_r + 1};
}

int main(){
    string s = "0110010";
    int n = sizeof(arr) / sizeof(arr[0]);
    auto ans = complement(s, n);
    if(ans.size() == 1){
        cout<<ans[0]<<endl;
    }else{
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}