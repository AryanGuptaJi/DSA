#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[40];   
    int index = 0;    
    while(n > 0){    
        arr[index++] = n%2;    
        n = n/2;    
    }    
    for(int i = index-1;i >= 0;i--){    
        cout<<(arr[i]);    
    }    
    cout<<endl;
}