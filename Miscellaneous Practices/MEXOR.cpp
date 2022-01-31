#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int X;
        cin>>X;
        if(X == 0){
            cout<<1<<endl;
        }else if(X == 1){
            cout<<2<<endl;
        }else{
            int sum = 1;
            while(sum*2 <= X){
                sum *= 2;
            }
            if(sum == X){
                cout<<X<<endl;
            }else if(X == (sum*2 - 1)){
                cout<<X + 1<<endl;
            }else{
                cout<<sum<<endl;
            }
        }
    }

    return 0;
}
