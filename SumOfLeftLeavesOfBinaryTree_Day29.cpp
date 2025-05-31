#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int sumOfLeftLeaves(TreeNode* root, bool isLeft = false) {
    if (!root) return 0;
    if (!root->left && !root->right && isLeft) return root->val;
    return sumOfLeftLeaves(root->left, true) + sumOfLeftLeaves(root->right, false);
}

int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    int result = sumOfLeftLeaves(root);
    cout << "Sum of left leaves: " << result << endl;
    return 0;
}
