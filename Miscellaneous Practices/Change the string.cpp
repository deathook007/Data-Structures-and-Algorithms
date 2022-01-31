#include<bits/stdc++.h>
using namespace std;
main()
 {
	int t, i;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    if(s[0] >=65 && s[0]<=90){
	        for(i=0;i<s.length();i++){
	            if(!(s[i] >=65 && s[i]<=90)){
        	        s[i] -= 32 ;
        	    }
	        }
	    }
	    else{
	        for(i=0;i<s.length();i++){
	            if(s[i] >=65 && s[i]<=90){
        	        s[i] += 32 ;
        	    }
	        }
	    }
	    cout<<s<<endl;
	}
}