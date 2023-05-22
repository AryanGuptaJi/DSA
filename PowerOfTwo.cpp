#include<iostream>
#include <cmath>
using namespace std;


bool pt(int x){
    for(int i=0; i<=30; i++){
        int res = pow(2,i);
        if(res==x){
            return true;
        }
    }
    return false;
};

int main(){
    int n; cin>>n;
    cout<< pt(n) << endl;
}
