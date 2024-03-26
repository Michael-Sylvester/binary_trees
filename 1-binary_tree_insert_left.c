#include "binary_trees.h"

/**
 *binary_tree_insert_left - Creates a left child node for the given parent node
 *@parent: pointer to parent node
 *@value: value to be placed in the node
 *Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node  = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent  = node;
	}

	parent->left = node;

	return (node);
}
