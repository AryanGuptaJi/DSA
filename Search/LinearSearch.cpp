#include<iostream>
using namespace std;

bool search(int arr[], int n, int key){

    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    
    int arr[10] = {5, 4, -2, 6, 8, 3, 2, 9, 0, -75};

    cout << "Enter the element to search for " << endl;

    int key; cin >> key;

    bool found = search(arr, 10, key);

    if(found){
        cout << "Key is present" << endl;
    }
    else{
        cout << "Key is not present" << endl;
    }
}