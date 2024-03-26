#include "binary_trees.h"

/**
 *binary_tree_is_leaf - check iof node is a leaf
 *@node: the node to be checked
 *Return: 1 if leaf, 2 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);

	return (0);

}
