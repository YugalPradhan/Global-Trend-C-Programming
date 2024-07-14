#include <bits/stdc++.h>
using namespace std;

// Function to find the length of the longest substring without repeating characters
int lengthOfLongestSubstring(const string& s) {
    unordered_map<char, int> charIndex;
    int maxLength = 0, start = 0;

    for (int end = 0; end < s.size(); ++end) {
        if (charIndex.find(s[end]) != charIndex.end()) {
            start = max(start, charIndex[s[end]] + 1); // Move start to the right of the duplicate character
        }
        charIndex[s[end]] = end;
        maxLength = max(maxLength, end - start + 1);
    }
    return maxLength;
}

int main() {
    // Test case
    string s = "abcabcbb";
    cout << "Length of Longest Substring Without Repeating Characters: " << lengthOfLongestSubstring(s) << endl;
    return 0;
}
