#include<iostream>
#include <limits.h>
using namespace std;

int getMax(int num[], int n){

    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // maxi = max(maxi, num[i]);
        if(num[i]>maxi){
            maxi=num[i];
        }
    }
    return maxi;
}

int getMin(int num[], int n){

    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // mini = min(mini, num[i]);
        if(num[i]<mini){
            mini=num[i];
        }
    }
    return mini;
}

int main(){
    int size; cin>>size;
    int num[100];  

    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    cout << "Maximum value is : " << getMax(num, size) << endl;
    cout << "Minimum value is : " << getMin(num, size) << endl;
}