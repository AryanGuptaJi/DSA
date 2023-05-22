#include<iostream> 
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
	int start=0;
	int end=v.size()-1;
	while(start<end){
		swap(v[start++], v[end--]);
	}
	return v;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.

	int i = n-1;
	int j = m-1;
	vector<int> res;

	int car = 0;

	while(i>=0 && j>=0){
		int val1 = a[i];
		int val2 = b[j];

		int sum = val1 + val2 + car;

		car = sum/10;
		sum = sum%10;
		res.push_back(sum);
		i--;
		j--;
	}

	while(i>=0){
		int sum = a[i]+car;
		car = sum/10;
		sum = sum%10;
		res.push_back(sum);
		i--;
	}

	while(j>=0){
		int sum = b[j]+car;
		car = sum/10;
		sum = sum%10;
		res.push_back(sum);
		j--;
	}

	while(car!=0){
		int sum = car;
		car = sum/10;
		sum = sum%10;
		res.push_back(sum);
	}

	return reverse(res);

}