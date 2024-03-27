#include "binary_trees.h"

/**
 *binary_tree_sibling - find if node has a sibling
 *@node: child node to check for sibling
 *Return: sibling or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *mom;
	
	if (node == NULL || node->parent == NULL)
		return (NULL);

	mom = node->parent;
	if (mom->right == node)
		return (mom->left);
	return (mom->right);
	
}
