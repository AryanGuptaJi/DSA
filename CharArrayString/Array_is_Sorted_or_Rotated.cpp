#include<iostream> 
#include<vector>
using namespace std;

bool check(vector<int>& nums) {
    int n =nums.size();
    int ct = 0;

    if(nums[n-1]>nums[0]){
        ct++;
    }

    for(int i=1; i<n; i++){
        if(nums[i-1] > nums[i]){
            ct++;
        }
    }

    return ct<=1;
}