//
// Created by 王青龙 on 2017/3/22.
//

#include <cstdlib>
#include <algorithm>
#include "solution.h"

bool Solution::isBalanced(TreeNode *root) {
    return dfsHeight(root) == -1;
}

int Solution::dfsHeight(TreeNode *root) {
    if (root == nullptr) {
        return 0;
    }
    int leftHeight = dfsHeight(root->left);
    if (leftHeight == -1) {
        return -1;
    }
    int rightHeight = dfsHeight(root->right);
    if (rightHeight == -1) {
        return -1;
    }
    if (std::abs(leftHeight - rightHeight) > 1) {
        return -1;
    }

    return std::max(leftHeight, rightHeight) + 1;
}
