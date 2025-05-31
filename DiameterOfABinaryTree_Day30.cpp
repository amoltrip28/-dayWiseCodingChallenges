#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int diameterHelper(TreeNode* root, int& diameter) {
    if (!root) return 0;
    int left = diameterHelper(root->left, diameter);
    int right = diameterHelper(root->right, diameter);
    diameter = max(diameter, left + right);
    return max(left, right) + 1;
}

int diameterOfBinaryTree(TreeNode* root) {
    int diameter = 0;
    diameterHelper(root, diameter);
    return diameter;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Diameter of binary tree: " << diameterOfBinaryTree(root) << endl;
    return 0;
}
