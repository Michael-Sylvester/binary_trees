#include "binary_trees.h"

/**
 *binary_tree_postorder -  goes through a binary tree
 *                         using post-order traversal
 *@tree: the root of the tree
 *@func: a function to be called for each node's value
 *Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
		return;

	postorder((binary_tree_t *)tree, func);

}

/**
 *postorder - iterate throuh tree in post-order fashion
*@node: the the current node in the iteration
*@func: a function to be called for each node's value
*Return: nothing
*/
void postorder(binary_tree_t *node, void (*func)(int))
{
	if (node == NULL)
		return;

	postorder(node->left, func);

	postorder(node->right, func);

	func(node->n);
}
