#include <bits/stdc++.h>
using namespace std;

// Function to find the factorial of a given number
long long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    // Test case
    int n = 5;
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}
