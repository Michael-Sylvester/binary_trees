#include "binary_trees.h"
/**
 *binary_tree_node - Creates a new node for the given parent node
 *@parent: pointer to parent node
 *@value: value to be placed in the node
 *Return: new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	return (node);
}
