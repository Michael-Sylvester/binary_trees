#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks for valid binary search tree
 *@tree: the root of the tree
 * Return: i if valid, otherwise 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int checks = 0;

	/* every node on left should be smaller*/
	/* every node on right should be bigger*/
	/*This should hold true for every node*/
	if (tree == NULL)
		return (0);

	checks = checkleft(tree->n, tree->left);
	if (checks == 0)
		return (0);
	checks = checkright(tree->n, tree->right);
	if (checks == 0)
		return (0);

	if (tree->left != NULL)
		binary_tree_is_bst(tree->left);
	if (tree->right != NULL)
		binary_tree_is_bst(tree->right);

	return (checks);
}

/**
*checkleft - check if every node is smaller than the target
*@target: the target value
*@node: the node to compare
*Return: 1 if all are smaller or 0
*/
int checkleft(int target, binary_tree_t *node)
{
	int check = 1;

	if (node == NULL)
		return (1);

	if (node->n < target)
	{
		check = checkleft(target, node->left);
		if (check == 1)
			check = checkleft(target, node->right);
		return (check);
	}
	else
		return (0);
}

/**
 *checkright - check if every node is larger than the target
 *@target: the target value
 *@node: the node to compare
 *Return: 1 if all are smaller or 0
 */
int checkright(int target, binary_tree_t *node)
{
	int check = 1;

	if (node == NULL)
		return (1);

	if (node->n > target)
	{
		check = checkleft(target, node->left);
		if (check == 1)
			check = checkleft(target, node->right);
		return (check);
	}
	else
		return (0);
}
