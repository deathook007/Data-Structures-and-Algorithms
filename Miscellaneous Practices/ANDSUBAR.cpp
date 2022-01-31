#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int power = log(n)/log(2);
        int k = pow(2, power);
        int sub1, sub2;
        sub1 = k/2;
        sub2 = n - k + 1;
        if(sub1 > sub2){
            cout<<sub1<<endl;
        }else{
            cout<<sub2<<endl;
        }
    }
    return 0;
}
