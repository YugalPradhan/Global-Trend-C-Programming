#include <bits/stdc++.h>
using namespace std;

// Function to find the GCD of two numbers
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    // Test case
    int a = 48, b = 18;
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;
    return 0;
}
