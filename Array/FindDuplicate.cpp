#include<iostream>
using namespace std;
#include <unordered_map>

int findDuplicate(int arr[], int n) 
{
    int a=0;
    for(int i=0; i<n; i++){
        a = a^arr[i];     
    }
    for(int i=1; i<n; i++){
        a = a ^ i;     
    }
    return a;
}

int main(){
    int arr[6] = {5, 5, 2, 3, 4, 2};

    cout << findDuplicate(arr, 6);
}