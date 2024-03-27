#include "binary_trees.h"

/**
 *binary_tree_uncle - find if node has an uncle
 *@node: child node to check is uncle
 *Return: the uncle or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *mom;
	binary_tree_t *granny;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	mom = node->parent;
	if (mom->parent == NULL)
		return (NULL);
	else
		granny = mom->parent;
	
	if (granny->right == mom)
		return (granny->left);
	return (granny->right);
	
}
