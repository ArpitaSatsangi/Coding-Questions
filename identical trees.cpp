#include <iostream>
using namespace std;

int identical_trees(node *tree1,node *tree2)
{
    if(tree1 == NULL && tree2==NULL)
        return 1;

    while(tree1!=NULL && tree2!=NULL)
    {
        return ((tree1->data==tree2->data) &&
                (identical_trees(tree1->left, tree2->left))&&
                (identical_trees(tree1->right, tree2->right)));
    }

    return 0;
}
