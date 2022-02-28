/* 
Palindrome String
Approach - Reverse
Time Complexity : O(N)
Space Complexity : O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int isPalindrom(string S){
    string s(S);
	    reverse(s.begin(), s.end());
	    if(s == S){
	        return 1;
	    }
	    return 0;
}

int main(){
    string s = "abba";
    int result = isPalindrom(s);
    if(result){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome;
    }
    return 0;
}