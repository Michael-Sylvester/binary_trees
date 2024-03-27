#include "binary_trees.h"

/**
 *binary_tree_nodes - Calculate No of nodes with at least 1 child
 *@tree: binary tree
 *Return: nothing
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		size += 1;

	size += binary_tree_nodes(tree->left);
	size += binary_tree_nodes(tree->right);


	return (size);
}
