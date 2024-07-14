#include <bits/stdc++.h>
using namespace std;

// Function to check if a string contains only alphabetic characters
bool isAlphabetic(const string& s) {
    return all_of(s.begin(), s.end(), ::isalpha);
}

int main() {
    // Test case
    string s = "HelloWorld";
    cout << "String contains only alphabetic characters: " << boolalpha << isAlphabetic(s) << endl;
    return 0;
}
