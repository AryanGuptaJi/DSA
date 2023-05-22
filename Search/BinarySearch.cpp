#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key){

    int low = 0;
    int high = n-1;
    // int mid = (low+high)/2;
    int mid = low + (high-low)/2;
    while(low<=high){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
        // mid = (low+high)/2;
        int mid = low + (high-low)/2;
    }    
    return -1;
}

int main(){
    // Increasing Order ke liye h ye code
    // int arr[10] = {3, 5, 7, 9, 10, 11, 23, 45, 67, 78};

    // Decreasing Order pr nhii chlega ye code
    int arr[5] = {8, 6, 5, 4, 3};

    cout << "Enter the element to search for " << endl;

    int key; cin >> key;

    // int index = binarysearch(arr, 10, key);
    int index = binarysearch(arr, 5, key);
    if(index==-1){
        cout << key << " is not present."<< endl;
    }
    else{
        cout << key << " is present at " << index << endl;
    }    
}