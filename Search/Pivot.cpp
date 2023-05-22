#include<iostream>
#include<vector>
using namespace std;

int find_pivot(vector<int> v) {
    int s =0;
    int e = v.size()-1;
    int mid=(s + e) / 2;
    while (s < e)
    {
        if(v[mid] >= v[0])
                s=mid+1;
            else
                e = mid;

        mid = (s + e) / 2;
    }
    return s;
}
int main(){
    vector<int>arr;
    int n; cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout << find_pivot(arr);

}