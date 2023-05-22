#include<iostream>
using namespace std;

int main() {

    int n; cin>>n;

    int i=1;
    char ch = 'A';


    while(i<=n){
        int val = i;
        int j=1;
        while (j<=n)
        {
            cout << val;
            val+=1;
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
} 