#include<iostream>
using namespace std;

int main(){
    char ch ='1';
    switch(ch){

        case '1': cout << "Character one" <<endl;
        break;

        case 1: cout << "One" <<endl;
        break;

        default: cout << "No" <<endl;
    }
}