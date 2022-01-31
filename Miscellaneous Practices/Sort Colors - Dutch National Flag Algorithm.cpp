#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int mid = 0;
        while(mid <= high){
            switch(nums[mid]){
                case 0:
                    swap(nums[low++], nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid], nums[high--]);
                    break;
            }
        }
    }
};

int main(){
    Solution s;
    vector<int> v = {2,0,2,1,1,0};
    s.sortColors(v);
    for(auto x : v){
        cout<<x<<" ";
    }
    return 0;
}