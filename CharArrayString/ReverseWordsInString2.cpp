#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void reverseWords(string &s) {
    reverse(s.begin(), s.end());
    for (int i = 0, j = 0; j <= s.length(); ++j) {
        if (j == s.length() || s[j] == ' ') {
            reverse(s.begin() + i, s.begin() + j);
            i = j + 1;
        }
    }
}