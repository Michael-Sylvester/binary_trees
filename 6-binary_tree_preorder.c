#include "binary_trees.h"

/**
 *binary_tree_preorder -  goes through a binary tree using pre-order traversal
 *@tree: the root of the tree
 *@func: a function to be called for each node's value
 *Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	
	if (tree == NULL || func == NULL)
		return;
	
	preorder((binary_tree_t *)tree, func);
	
}


void preorder(binary_tree_t *node, void (*func)(int))
{
	if (node == NULL)
		return;
	
	func(node->n);
	preorder(node->left, func);

	preorder(node->right, func);

}
