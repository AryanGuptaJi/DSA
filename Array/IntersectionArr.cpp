#include <bits/stdc++.h> 
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i=0; 
	int j=0;
	vector<int> v;
	while(i<n && j<m){
		if(arr1[i] == arr2[j]){
			v.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i] < arr2[j]){
			i++;
		}
		else{
			j++;
		}
	}
	
	return v;
}