#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

// Without using Binary Search
// int main(){
//     int N; cin>>N;
//     int sqrt = pow(N, 0.5);
//     cout<< sqrt;
// }

long long int sqrtInteger(int n) {
        
    int s = 0;
    int e = n;
    long long int mid = s + (e-s)/2;
    
    long long int ans = -1;
    while(s<=e) {
        
        long long int square = mid*mid;
        
        if(square == n)
            return mid;
        
        if(square < n ){
            ans = mid;
            s = mid+1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double morePrecision(int n, int precision, int sqrt){
    double fact = 1;
    double ans = sqrt;

    for(int i=0; i<precision; i++){
        fact = fact/10;
        for(double j=sqrt; j*j<=n; j=j+fact){
            ans = j;
        }
    }
    return ans;
}
int main(){
    int N; 
    cout << "Enter a number for squareRoot : ";
    cin>>N;

    int sqrt = sqrtInteger(N);

    int precision;
    cout << "Enter the precision number : ";
    cin>>precision;

    cout << "Answer is " << morePrecision(N, precision, sqrt);
}
