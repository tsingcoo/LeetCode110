//
// Created by 王青龙 on 2017/3/22.
//

#ifndef LEETCODE110_SOLUTION_H
#define LEETCODE110_SOLUTION_H

struct TreeNode{
    int val;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};

class Solution{
public:
    bool isBalanced(TreeNode* root);
    int dfsHeight(TreeNode* root);
};

#endif //LEETCODE110_SOLUTION_H
