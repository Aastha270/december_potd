/*
MAXIMUM DIFFERENCE BETWEEN NODE AND ANCESTOR--- 9 DECEMBER

TIME COMPLEXITY:- O(N)
SPACE COMPLEXITY:- O(1)



int helper(TreeNode* root, int curmin, int curmax)
{
    if(root == NULL)
    return curmax - curmin;

    curmax = max(root->val, curmax);
    curmin = min(root->val, curmin);

    int l = helper(root->left, curmin, curmax);
    int r = helper(root->right, curmin, curmax);

    return max(l,r);
}
    int maxAncestorDiff(TreeNode* root) {
    
    if(root == NULL)
    return 0;

    return helper(root, root->val, root->val);
    }

*/