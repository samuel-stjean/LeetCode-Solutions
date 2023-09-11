/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
// tc is O(n) as we traverse the tree once. 
//the space complexity is O(n) as I allocate a queue t0 hold nodes of the tree. 
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        TreeNode* cur = nullptr;
        double sum = 0;
        int count = 0;
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        while(!q.empty()){
            cur = q.front();
            q.pop();
            if(cur == nullptr){
                res.push_back(sum/count);
                sum = 0;
                count = 0;
                q.push(nullptr);
                if(q.front() == nullptr)break;
                continue;
            }
            count++;
            sum += cur->val;
            if(cur->left)q.push(cur->left);
            if(cur->right)q.push(cur->right);
        }
        return res;
    }
};
