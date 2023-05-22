#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool is_palindrome(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower); // convert to lowercase
    string reversed_str = str;
    reverse(reversed_str.begin(), reversed_str.end()); // reverse the string
    return str == reversed_str; // compare the original and reversed strings
}

// example usage
int main() {
    cout << boolalpha << is_palindrome("racecar") << endl; // true
    cout << boolalpha << is_palindrome("Hello") << endl; // false
    return 0;
}
