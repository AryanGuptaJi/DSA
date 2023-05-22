#include <iostream>
using namespace std;

class Solution {
private: 
    bool checkCount(int a[26], int b[26])
    {
        for(int i=0; i<26; i++){
            if(a[i] != b[i]){
                return 0;
            }
        }
        return 1;
    }

public:
    bool checkInclusion(string s1, string s2) {
        int c1[26] = {0};
        for(int i=0; i<s1.length(); i++){
            int index = s1[i] - 'a';
            c1[index]++;
        }

        int ws = s1.length();
        int i = 0;
        int c2[26] = {0};

        while(i < ws && i < s2.length()){
            int index = s2[i] - 'a';
            c2[index]++;
            i++;
        }

        if(checkCount(c1, c2)){
            return 1;
        }

        while(i<s2.length()){
            char newc = s2[i];
            int index = newc - 'a';
            c2[index]++;   

            char old = s2[i - ws] ;
            index = old - 'a';
            c2[index]--;

            if(checkCount(c1, c2)){
                return 1;
            }
            i++;
        }
        return 0;
    }
};