/*
Given the root node of a binary search tree, return the sum of values of all nodes with value between L and R (inclusive).

The binary search tree is guaranteed to have unique values.
 */
int sum = 0;

void traverseBST(struct TreeNode* root, int L, int R) {
    if(root == NULL)
        return;
    if(root->val >= L && root->val <= R) {
        sum+=root->val;
    }
    if(root->val > L)
        traverseBST(root->left, L, R);
    if(root->val < R)
        traverseBST(root->right, L, R);
}

int rangeSumBST(struct TreeNode* root, int L, int R){
    traverseBST(root, L, R);
    return sum;
}