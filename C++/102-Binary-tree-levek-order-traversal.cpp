class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        // tc and sc are both o(n)
        vector<vector<int>> res;
        if(root == nullptr)return res;
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* node;
        int size;
        while(!q.empty()){
            size = q.size();
            vector<int> t;
            for(int i = 0; i < size; i++){
                node = q.front();
                q.pop();
                if(node-> left != nullptr) q.push(node->left);
                if(node->right != nullptr) q.push(node->right);
                t.push_back(node->val);
            }
            res.push_back(t);
        }
        return res;
    }
};
