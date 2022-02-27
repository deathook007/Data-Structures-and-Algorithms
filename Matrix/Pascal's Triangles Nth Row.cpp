/* 
Spiral Matrix
Time Complexity : O(N^2)
Space Complexity : O(1)
*/

#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

vector<long long> pascalTriangle(int n){
    vector<vector<long long>> ans(n);
    for(int i=0; i<n; i++){
        ans[i].resize(i + 1);
        ans[i][0] = ans[i][i] = 1;
           
        for(int j=1; j<i; j++){
            ans[i][j] = (ans[i - 1][j - 1] + ans[i - 1][j]) % MOD;
        }
    }
    return ans[n - 1];
}

void printAns(vector<long long> &ans){
    for(auto &x : ans){
        cout<<x<<" ";
    }
    cout<<"\n";
}

int main(){
    int n = 5;
    auto ans = pascalTriangle(n);
    cout<<n<<" th row of pascal's triangle is : ";
    printAns(ans);
    return 0;
}