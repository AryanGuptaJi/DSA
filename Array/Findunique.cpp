#include<iostream>
using namespace std;

int findunique(int arr[], int n){

    int a=0;
    for(int i=0; i<n; i++){
        a = a^arr[i];  
        cout << a << endl;      
    }
    return a;
}

int main(){
    
    // int arr[10] = {5, 4, -2, 6, 8, 3, 2, 9, 0, -75};
    // swapAlternate(arr, 10);

    int arr[5] = {0, 2, 5, 0, 2};
    int ans = findunique(arr, 5);
    cout << ans << endl;
}