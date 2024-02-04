//The diameter of a tree is the number of nodes on the longest path
//between two leaves in the tree.

int height(node *root)
{
    if(root==NULL)
        return 0;

    return 1+max(height(root->left), height(root->right));
}

int diameter(node *root)
{
    if(root==NULL)
        return 0;

    int lheight = height(root->left);
    int rheight = height(root->right);

    int ldia = diameter(root->left);
    int rdia = diameter(root->right);

    return max(1+lheight+rheight, max(ldia, rdia));
}
