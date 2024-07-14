#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxPathSumUtil(TreeNode* node, int& res) {
    if (!node) return 0;
    int left = max(0, maxPathSumUtil(node->left, res)); // Max path sum on the left
    int right = max(0, maxPathSumUtil(node->right, res)); // Max path sum on the right
    res = max(res, node->val + left + right); // Max path sum with current node as the root
    return node->val + max(left, right); // Max path sum with current node as end
}

// Function to find the maximum path sum
int maxPathSum(TreeNode* root) {
    int res = INT_MIN;
    maxPathSumUtil(root, res);
    return res;
}

int main() {
    // Test case
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    cout << "Maximum Path Sum: " << maxPathSum(root) << endl;
    return 0;
}
