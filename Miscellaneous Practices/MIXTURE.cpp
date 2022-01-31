#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(a > 0 and b > 0){
            cout<<"Solution"<<endl;
        }else if(b == 0){
            cout<<"Solid"<<endl;
        }else{
            cout<<"Liquid"<<endl;
        }
    }
    return 0;
}
