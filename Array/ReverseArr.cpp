#include<iostream>
using namespace std;

int reverse(int arr[], int n){

    for(int i=n-1; i>=0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}

int main(){
    
    int arr[10] = {5, 4, -2, 6, 8, 3, 2, 9, 0, -75};

    reverse(arr, 10);
    
}