#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        int sum = 0;
        sum = a + b + c;
        if(sum <= d){
            cout<<1<<endl;
        }else if(a + c <= d or a + b <= d){
            cout<<2<<endl;
        }else{
            cout<<3<<endl;
        }
    }
    return 0;
}
