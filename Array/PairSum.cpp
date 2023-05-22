#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<vector<int>> v;

   for(int i=0; i<arr.size(); i++){
      for(int j=i+1; j<arr.size(); j++){
         if(arr[i]+arr[j] == s){
            vector<int> v2;
            v2.push_back(min(arr[i], arr[j]));
            v2.push_back(max(arr[i], arr[j]));
            v.push_back(v2);
         }
      }
   }
   sort(v.begin(), v.end());
   return v;
}