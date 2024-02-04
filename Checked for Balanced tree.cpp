class Solution{
    public:
    int height(Node *root)
    {
        if(root==NULL)
            return 0;

        int lh=height(root->left);
        int rh=height(root->right);

        if(lh>rh)
            return lh+1;

        else
            return rh+1;
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        if(root==NULL)
        return true;


        int lh=height(root->left);
        int rh=height(root->right);

        if(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right))
            return true;


        return false;
    }
}
