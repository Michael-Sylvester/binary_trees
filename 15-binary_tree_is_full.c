#include "binary_trees.h"

/**
 *binary_tree_is_full - check iof node is a leaf
 *@tree: the root node of the tree
 *Return: 1 if balanced, 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);
	else if (tree->right != NULL && tree->left != NULL)
	{
		left = binary_tree_is_full(tree->left);
		if (left == 0)
			return (0);
		right = binary_tree_is_full(tree->right);
		if (right == 0)
			return (0);
		else
			return (1);
	}
	else
		return (0);
}
