#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Codec {
public:
    // Function to serialize the binary tree
    string serialize(TreeNode* root) {
        if (!root) return "# ";
        return to_string(root->val) + " " + serialize(root->left) + serialize(root->right);
    }

    // Function to deserialize the binary tree
    TreeNode* deserialize(string data) {
        istringstream iss(data);
        return deserializeHelper(iss);
    }

private:
    TreeNode* deserializeHelper(istringstream& iss) {
        string val;
        iss >> val;
        if (val == "#") return nullptr;
        TreeNode* root = new TreeNode(stoi(val));
        root->left = deserializeHelper(iss);
        root->right = deserializeHelper(iss);
        return root;
    }
};

int main() {
    // Test case
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);

    Codec ser, deser;
    string serializedTree = ser.serialize(root);
    cout << "Serialized Tree: " << serializedTree << endl;

    TreeNode* deserializedTree = deser.deserialize(serializedTree);
    string checkSerialization = ser.serialize(deserializedTree);
    cout << "Check Deserialization by Serializing Again: " << checkSerialization << endl;

    return 0;
}
