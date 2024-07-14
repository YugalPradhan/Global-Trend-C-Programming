#include <bits/stdc++.h>
using namespace std;

// Function to reverse a segment of the array
void reverse(vector<int>& nums, int start, int end) {
    while (start < end) {
        swap(nums[start++], nums[end--]);
    }
}

// Function to rotate the array to the right by k steps
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k %= n;
    reverse(nums, 0, n - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, n - 1);
}

int main() {
    // Test case
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate(nums, k);
    cout << "Rotated Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
