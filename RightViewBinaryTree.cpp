/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue <TreeNode*> q;
        q.push(root);
        vector <int> v;
        while(root)
        {
            int n = q.size();
            
            for(int i = 1 ; i <= n ; i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(i==n)
                    v.push_back(temp->val);
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
            if(q.size()==0)
                break;
            
        }
        return v;
    }
};
//https://leetcode.com/problems/binary-tree-right-side-view/submissions/
//refs
//https://www.geeksforgeeks.org/right-view-binary-tree-using-queue/
