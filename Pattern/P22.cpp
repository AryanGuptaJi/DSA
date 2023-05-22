#include<iostream>
using namespace std;

int main() {

    int n; cin>>n;

    int i=1;

    while(i<=n){
        
        int j=2;

        while(j<=i){
            cout << " ";
            j=j+1;
        }

        int k=4;
        while (k>=i)
        {
            cout << "*";                        
            k-=1;
        }

        cout << endl;
        i=i+1;
    }
}