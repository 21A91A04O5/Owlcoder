class Solution {
public:
    void Pre(TreeNode* root,vector<int>& v1){
        if(root == NULL)
            return;
        if(root->left == NULL and root->right == NULL){
            v1.push_back(root->val);
            return;
        }
    Pre(root->left,v1);
    Pre(root->right,v1);

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1;
        vector<int>v2;
        Pre(root1,v1);
        Pre(root2,v2);
        return v1 == v2;
        
    }
};