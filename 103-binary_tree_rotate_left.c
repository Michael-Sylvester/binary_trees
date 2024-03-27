#include "binary_trees.h"

/**
 * binary_tree_rotate_left - perform rotate left operation
 *@tree: the tree root to be rotated
 * Return: new tree root.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *granny, *oldtop, *oldright, *temp;

	granny = tree->parent;
	oldtop = tree;
	oldright = tree->right;
	temp = NULL;

	/*upgrade the oldright to the position of parent */
	if (granny != NULL && oldright != NULL)
	{
		if (granny->left == oldtop)
			granny->left = oldright;
		else if (granny->right == oldtop)
			granny->right = oldright;
		else
			oldright->parent = NULL;
	}
	/*The left child on oldright should be moved to the left of oldtop*/
	if (oldright->left != NULL)
		temp = oldright->left;
	oldright->left = oldtop;
	oldtop->right = temp;

	if (temp != NULL)
		temp->parent = oldright;
	oldtop->parent = oldright;
	return (oldright);
}
