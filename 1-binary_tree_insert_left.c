#include "binary_trees.h"
/**
 *binary_tree_insert_left - Creates a left child node for the given parent node
 *@parent: pointer to parent node
 *@value: value to be placed in the node
 *Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL || parent == NULL)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->right = NULL;

	if (parent->left != NULL)
		node->left = parent->left;

	parent->left = node;
  
	return (node);
}
