#include "binary_trees.h"

/**
 *binary_tree_is_root - CHeck if the node is the root.
 *@node: the node to be checked
 *Return: 1 if root, 2 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);

}
