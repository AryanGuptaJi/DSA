#include<iostream>
#include <limits.h>
using namespace std;

int main(){
    int x; cin>>x;
    int res=0;
    while(x!=0){
        int digit = x%10;
        if((res>INT_MAX/10)||(res<INT_MIN/10)){
            cout<< 0;
        }
        res = res*10+digit;
        x=x/10;
    }
    cout<< res;
}
