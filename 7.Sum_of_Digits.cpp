#include <bits/stdc++.h>
using namespace std;

// Function to compute the sum of the digits of a given number
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    // Test case
    int n = 12345;
    cout << "Sum of digits of " << n << " is: " << sumOfDigits(n) << endl;
    return 0;
}
