#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum difference between any two elements in an array
int maxDifference(vector<int>& nums) {
    if (nums.empty()) return 0;
    int minElem = nums[0], maxDiff = 0;
    for (int num : nums) {
        maxDiff = max(maxDiff, num - minElem);
        minElem = min(minElem, num);
    }
    return maxDiff;
}

int main() {
    // Test case
    vector<int> nums = {2, 3, 10, 6, 4, 8, 1};
    cout << "Maximum Difference: " << maxDifference(nums) << endl;
    return 0;
}
