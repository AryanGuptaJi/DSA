#include<iostream>
using namespace std;

int main() {

    int n; cin>>n;

    int i=1;

    while(i<=n){
        
        int j=1;
        char ch = 'A'+n-i;
        while (j<=i && j>0)
        {
            cout << ch << " ";
            ch+=1;
            j+=1;
        }
        cout << endl;
        i=i+1;
    }
}

#include<iostream>
using namespace std;

int main() {

    int n; cin>>n;

    int i=1;

    while(i<=n){
        
        int j=1;
        while (j<=i && j>0)
        {
            cout << n+j-i << " ";
            j+=1;
        }
        cout << endl;
        i=i+1;
    }
}