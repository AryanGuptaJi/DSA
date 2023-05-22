#include<iostream>
using namespace std;

int main() {

    int n; cin>>n;

    int i=1;

    while(i<=n){
        
        int j=1;
        int value = i;
        while (j<=i && j>0)
        {
            cout << value << " ";
            value-=1;
            j+=1;
        }
        cout << endl;
        i=i+1;
    }
}