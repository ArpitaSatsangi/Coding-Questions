bool is_mirror(node *root1, node*root2)
{
    if(root1==NULL &&root2==NULL)
        return true;

    if(root1!=NULL && root2!=NULL && root1->data==root2->data)

        return (is_mirror(root1->left, root2->right) &&
                is_mirror(root1->right, root2->left));

    return false;
}

bool is_symmetric(node *root)
{
    return is_mirror(root, root);
}
