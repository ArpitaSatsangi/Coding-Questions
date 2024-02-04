void mirror(node *root)
{
    if(root==NULL)
        return;

    else
    {
        node *temp;

        mirror(root->left);
        mirror(root->right);

        temp=root->left;
        root->left=root->right;
        root->right=temp;
    }
}
