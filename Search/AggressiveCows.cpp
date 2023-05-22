#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid){
    int cc =1;
    int lp = stalls[0];

    for(int i=0; i<stalls.size(); i++){
        if(stalls[i]-lp >= mid){
            cc++;
            if(cc==k){
                return true;
            }
            lp = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    //    Write your code here.
    int start = 0;
    int m = -1;
    for(int i=0; i<stalls.size(); i++){
        m = max(m, stalls[i]);
    }
    int end = m;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start<=end){
        if(isPossible(stalls, k, mid)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}