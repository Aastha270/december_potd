// Leaf-Similar trees- 8 december 2022


// TIME COMPLEXITY:- O(N)
// SPACE COMPLEXITY:- O(h)   [where h is the number of leaf nodes]

/*
class Solution {
public:

   void getleaf(TreeNode* root, vector<int> &vec){

       if(root == NULL){
           return;
       }

       if(root->left == NULL && root->right == NULL)
       {
           vec.push_back(root->val);
           return ;
       }

       getleaf(root->left, vec);
       getleaf(root->right, vec);

   } 
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        vector<int> l,r;

        getleaf(root1, l);
        getleaf(root2, r);

        if(l == r)
        return true;

        else return false;
    }
};
*/