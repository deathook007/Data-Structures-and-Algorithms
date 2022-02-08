/* 
Repetitive Addition Of DigitsApproach - Using unordered_map for hashing
Time Complexity : O(1)
Space Complexity : O(1)
*/

#include<bits/stdc++.h>
using namespace std;
int singleDigit(long long number)
{
    int sum = 0;
    while(number)
    {
        sum += (number % 10);
        number /= 10;
    }
    if(sum < 10)
        return sum;
    else
        return singleDigit(sum);
}

int main(){
    long long num = 98;
    cout<<singleDigit(num);
    return 0;
}