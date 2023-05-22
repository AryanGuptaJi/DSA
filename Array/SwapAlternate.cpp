#include<iostream>
using namespace std;

int swapAlternate(int arr[], int n){

    for(int i=0; i<n; i+=2){
        if(i+1<n){
            // swap(arr[i], arr[i+1]);
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            
        }        
    }
    return 0;
}

int main(){
    
    // int arr[10] = {5, 4, -2, 6, 8, 3, 2, 9, 0, -75};
    // swapAlternate(arr, 10);

    int arr[9] = {5, 4, -2, 6, 8, 3, 2, 9, 0};
    swapAlternate(arr, 9);

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    
}