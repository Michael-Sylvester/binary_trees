#include "binary_trees.h"

/**
 *binary_tree_depth - Calculate how far from the node to root
 *@tree: binary tree to be deleted
 *Return: nothing
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *elder;

	if (tree == NULL)
		return (0);

	elder = tree->parent;
	while (elder != NULL)
	{
		depth += 1;
		elder = elder->parent;
	}

	return (depth);
}
