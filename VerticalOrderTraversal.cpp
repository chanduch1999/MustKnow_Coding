/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
        queue < pair <TreeNode*,int> > q;
         vector < vector < int > > v;
         if (!A) 
            return v; 
        int len=0;
        map < int , vector < int > > ma;
        q.push({A,0});
      
        while(!q.empty())
        {
           pair < TreeNode*,int > p=q.front();
           q.pop();
           ma[p.second].push_back(p.first->val);
           if(p.first->left!=NULL)
           q.push({p.first->left,p.second-1});
           if(p.first->right!=NULL)
           q.push({p.first->right,p.second+1});  
        }
       
        for(auto &i : ma)
            v.push_back(i.second);
        return v;
}
//https://www.geeksforgeeks.org/print-a-binary-tree-in-vertical-order-set-3-using-level-order-traversal/ "(order maintained)"
//https://www.geeksforgeeks.org/print-binary-tree-vertical-order-set-2/ "(order not maintained)"
//https://www.interviewbit.com/problems/vertical-order-traversal-of-binary-tree/
