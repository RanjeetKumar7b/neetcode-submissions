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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        if(!root)return ans;
        while(!q.empty()){
            vector<int>temp;
            int len = q.size();
            for(int i=0;i<len;i++){
                TreeNode* pq=q.front();
                if(pq->left!=NULL){
                    q.push(pq->left);
                }
                if(pq->right!=NULL){
                    q.push(pq->right);
                }
                q.pop();
                temp.push_back(pq->val);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
