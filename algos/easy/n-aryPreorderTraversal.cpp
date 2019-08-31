/*
Given an n-ary tree, return the preorder traversal of its nodes' values.

Return its preorder traversal as: [1,3,5,6,2,4].

Note:

Recursive solution is trivial, could you do it iteratively?
*/
class Solution {
public:
    vector<int> result;
    vector<int> preorder(Node* root) {
        traverseChildren(root);
        return result;
    }
    
    void traverseChildren(Node* root) {
        if(root == NULL) return;
        result.push_back(root->val);
        for(int i = 0; i < root->children.size(); i++) {
            traverseChildren(root->children[i]);
        }
    }
};