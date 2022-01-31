#include <iostream>
using namespace std;

int main() {
	long long n;
	cin>>n;
	long long sume = 0, sumo = 0;
	for(long long i=1; i<=2*n; i++){
	    if(i%2==0){
	        sume = sume + i;
	    }else{
	        sumo = sumo + i;
	    }
	}
	cout<<sumo<<" "<<sume;
	return 0;
}
