#include "binary_trees.h"

/**
 *binary_tree_is_complete - complete binary tree check
 *@tree: binary tree root
 *Return: int
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int l_level = 0;
	int r_level = 0;

	if (tree == NULL)
		return (0);

	l_level = get_level2(tree->left, 1);
	r_level = get_level2(tree->right, 1);

	if (l_level == r_level && l_level != -1)
		return (1);
	return (0);
}

/**
 *get_level2 - Calculate level\height of the node
 *@tree: binary tree node
 *@level: the level/depth of the node
 *Return: the level of the node or -1 if not full
 */
int get_level2(const binary_tree_t *tree, int level)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (level);

	if (tree->left == NULL || tree->right == NULL)
		return (-1);


	left = get_level2(tree->left, level + 1);
	right = get_level2(tree->right, level + 1);
	if (left == right && left != -1)
		level = left;
	return (level);
}
