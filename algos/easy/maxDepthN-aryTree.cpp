/*
Given a n-ary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Note:

The depth of the tree is at most 1000.
The total number of nodes is at most 5000.
*/
class Solution {
public:
    int maxDepth(Node* root) {
        int maxCount = 0;
        if(root == NULL) return 0;
        else if(root != NULL && root->children.size() == 0) return 1;
        for(int i = 0; i < root->children.size(); i++) {
           int count = maxDepth(root->children[i]);
            if(count > maxCount) maxCount = count;
        }
        return maxCount + 1;
    }
};