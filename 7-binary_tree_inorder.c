#include "binary_trees.h"

/**
 *binary_tree_inorder -  goes through a binary tree
 *                       using in-order traversal
 *@tree: the root of the tree
 *@func: a function to be called for each node's value
 *Return: nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
		return;

	inorder((binary_tree_t *)tree, func);

}

/**
 * inorder - iterate throuh tree in in-order fashion
 *@node: the the current node in the iteration
 *@func: a function to be called for each node's value
 *Return: nothing
 */
void inorder(binary_tree_t *node, void (*func)(int))
{
	if (node == NULL)
		return;

	inorder(node->left, func);
	func(node->n);
	inorder(node->right, func);

}
