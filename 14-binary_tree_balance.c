#include "binary_trees.h"

/**
 *binary_tree_balance - Calculate the balance of the tree
 *@tree: binary tree node
 *Return: int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight = 0;
	int rheight = 0;

	if (tree == NULL)
		return (0);

	lheight = get_height(tree->left);
	rheight = get_height(tree->right);
	return (lheight - rheight);
}

/**
 *get_height - Calculate height of the tree
 *@tree: binary tree node
 *Return: int
 */
int get_height(const binary_tree_t *tree)
{
	int height = 0;
	int left = 0;
	int right = 0;

	if (tree != NULL)
		height = 1;
	else
		return (0);

	left = get_height(tree->left);
	right = get_height(tree->right);

	if (left > right)
		height += left;
	else
		height += right;

	return (height);
}
