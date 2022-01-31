#include <iostream>
using namespace std;

int main() {
	int n, count=0;
	cin>>n;
	for(int i=1; i<=n; i++){
	    if(n%i==0){
	       count++;
	    }
	}
	cout<<count<<endl;
	for(int i=1; i<=n; i++){
	    if(n%i==0){
	       cout<<i<<" ";
	    }
	}
	
	return 0;
}
