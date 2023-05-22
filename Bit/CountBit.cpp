#include <iostream>
using namespace std;

// Function to count the total number of set bits
int countSetBits(int a, int b) {
    int count = 0;

    // Iterate over each bit position in a and b
    while (a || b) {
        // Check the least significant bit of a
        if ((a&1)>0){
            count++;
        }
        // Check the least significant bit of b
        if ((b&1)>0){
            count++;
        }

        // Right shift both a and b
        a = a >> 1;
        b = b >> 1;
    }

    return count;
}

int main() {
    int a, b;
    cin>>a>>b;

    // Call the function to count set bits
    int total = countSetBits(a, b);

    // Print the total
    cout << "Total number of set bits: " << total << endl;

    return 0;
}
