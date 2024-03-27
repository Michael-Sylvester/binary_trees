#include "binary_trees.h"

/**
 *binary_tree_size - Calculate the size of the tree
 *@tree: binary tree
 *Return: nothing
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size += 1;

	if (tree->left != NULL)
	{
		size += binary_tree_size(tree->left);
	}

	if (tree->right != NULL)
	{
		size += binary_tree_size(tree->right);
	}

	return (size);
}
