#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, h, x;
	cin>>n>>h>>x;
	int a[n];
	for(int i=0; i<n; i++){
	    cin>>a[i];
	}
	if(h<=x){
	    cout<<"YES";
	}
	else{
	    int flag =0;
	    for(int i=0; i<n; i++){
	        if((a[i]+x)>=h){
	            flag=1;
	        }
	    }
	    if(flag==1){
	        cout<<"YES";
	    }else{
	        cout<<"NO";
	    }
	}
	return 0;
}
