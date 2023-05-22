#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int getPivot(vector<int> &v) {

    int s = 0;
    int e = v.size()-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(v[mid] >= v[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int binarySearch(vector<int> &v, int s, int e, int key) {

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(v[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > v[mid]) {
            start = mid + 1;
        }
        else{ //key < v[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
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
    cout << "Enter the element to search for: ";
    int k; cin>>k;

    int pivot = getPivot(arr);
    if( k >= arr[pivot] && k <= arr[n-1])
    {//BS on second line
        cout << binarySearch(arr, pivot, n-1, k);
    }
    else
    {//BS on first line
        cout << binarySearch(arr, 0, pivot - 1, k);
    }

}
