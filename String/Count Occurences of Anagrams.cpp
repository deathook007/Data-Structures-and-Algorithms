/* 
Count Occurences of Anagrams
Approach - Using Sliding Window and Hashing
Time Complexity : O(N * 26) = O(N)
Space Complexity : O(26) = O(1)
*/
#include<bits/stdc++.h>
using namespace std;
int countAnagrams(string s, string p){
    vector<int> sHash(26, 0), pHash(26, 0);
	int count = 0;
    int s_len = s.size();
    int p_len = p.size();
        
    for(int i=0; i<p_len; i++){
        pHash[p[i] - 'a']++;
        sHash[s[i] - 'a']++;
    }
        
    if(pHash == sHash){
        count++;
    }
        
    for(int i=p_len; i<s_len; i++){
        sHash[s[i - p_len] - 'a']--;
        sHash[s[i] - 'a']++;
        if(sHash == pHash){
            count++;
        }
    }
    return count;
}

int main(){
    string s = "cbaebabacd";
    string p = "abc";
    cout<<countAnagrams(s, p);
    return 0;
}