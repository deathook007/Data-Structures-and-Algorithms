#include<bits/stdc++.h>
using namespace std;
main()
 {
	int t;
	cin>>t;
	while(t--){
	    int a, b;
	    cin>>a>>b;
	    if(a>b){
	        cout<<a<<" "<<"is greater than"<<" "<<b<<endl;
	    }else if(a<b){
	        cout<<a<<" "<<"is less than"<<" "<<b<<endl;
	    }
	    else
	    cout<<a<<" "<<"is equals to"<<" "<<b<<endl;
	}
}