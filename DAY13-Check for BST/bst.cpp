
class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
     bool IsBST(Node* root,int min,int max)
    {
        if(root==NULL)
            return true;
         //recursively checking that teh lefts node data is less that the root and its right node is greater than its root.   
        if(root->data>min && root->data<max
        && IsBST(root->left,min,root->data)
        && IsBST(root->right,root->data,max)) 
            return true;
            
        return false;
    }
    
    bool isBST(Node* root) 
    {
        return IsBST(root,INT_MIN,INT_MAX);
    }
    
};
