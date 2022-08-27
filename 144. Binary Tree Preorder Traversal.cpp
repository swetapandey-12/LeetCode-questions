//Given the root of a binary tree, return the preorder traversal of its nodes' values.


class Solution{
public:
    vector<int>PreorderTraversal(TreeNode*, root)
      vector<int> Preorder ;
      if(root==NUll) return preorder;
      
      
      stack(TreeNode*) st;
      st.push(root);
      while(!st.empty()){
          root=st.top();
          st.pop();
          preorder.push_back(root->val);
           if(root->right != NULL)
            {
                st.push(root->right);
            
            }
            if(root->left != NULL)
            {
                st.push(root->left);
            }
        }
        return preorder;
    }
};
      
