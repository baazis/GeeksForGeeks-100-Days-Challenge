        class Solution
        {
            public:

            bool check(Node* root, Node* min, Node* max){

                if(root==NULL) return true;

                if(min!=NULL and root->data <= min->data) return false; // for rightcheck
                if(max!=NULL and root->data >= max->data) return false; // for leftcheck

                //checking for left and right tree recursively
                bool leftCheck = check(root->left, min, root);
                bool rightCheck = check(root->right, root, max);

                return leftCheck && rightCheck;
            }
            //Function to check whether a Binary Tree is BST or not.
            bool isBST(Node* root) 
            {

                // Your code here
                return check(root, NULL, NULL);
            }
        };
