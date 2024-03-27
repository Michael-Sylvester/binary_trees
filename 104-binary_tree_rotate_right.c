#include "binary_trees.h"

/**
 * binary_tree_rotate_right - perform rotate left operation
 *@tree: the tree root to be rotated
 * Return: new tree root.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *granny, *oldtop, *oldleft, *temp;

	if (tree == NULL)
		return (NULL);

	granny = tree->parent;
	oldtop = tree;
	oldleft = tree->left;
	temp = NULL;

	/*upgrade the oldright to the position of parent */
	if (granny != NULL && oldleft != NULL)
	{
		if (granny->left == oldtop)
			granny->left = oldleft;
		else if (granny->right == oldtop)
			granny->right = oldleft;

		oldleft->parent = granny;
	}
	else if (granny == NULL && oldleft != NULL)
		oldleft->parent = NULL;
	else
		return (tree);

	/*The right child on oldleft should be moved to the right of oldtop*/
	if (oldleft->right != NULL)
		temp = oldleft->right;
	oldleft->right = oldtop;
	oldtop->left = temp;

	if (temp != NULL)
		temp->parent = oldtop;
	oldtop->parent = oldleft;
	return (oldleft);
}
