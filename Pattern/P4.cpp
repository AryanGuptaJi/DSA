#include<iostream>
using namespace std;

int main() {

    int n; cin>>n;

    int i=1;

    while(i<=n){
        
        int j=n;
        while (j<=n && j>0)
        {
            cout << j ;
            j=j-1;
        }
        cout << endl;
        i=i+1;
    }
}