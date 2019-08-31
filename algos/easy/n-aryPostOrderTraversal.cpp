/*
Given an n-ary tree, return the postorder traversal of its nodes' values.

Return its postorder traversal as: [5,6,3,2,4,1].

 
Note:

Recursive solution is trivial, could you do it iteratively?
*/
class Solution {
public:
    vector<int> result;
    vector<int> postorder(Node* root) {
        traverseChildren(root);
        return result;
    }
    
    void traverseChildren(Node* root) {
        if(root == NULL) return;
        for(int i = 0; i < root->children.size(); i++) {
            traverseChildren(root->children[i]);
        }
        result.push_back(root->val);
    }
};