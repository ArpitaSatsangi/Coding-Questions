int height(node *root)
{
    if(root==NULL)
        return 0;

    int lheight=height(root->left);
    int rheight=height(root->right);

    return max(lheight, rheight)+1;
}
