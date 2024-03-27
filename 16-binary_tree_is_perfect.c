#include "binary_trees.h"

/**
 *binary_tree_is_perfect - Check if tree is perfect
 *@tree: binary tree root
 *Return: int
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_level = 0;
	int r_level = 0;

	if (tree == NULL)
		return (0);

	l_level = get_level(tree->left, 1);
	r_level = get_level(tree->right, 1);

	if (l_level == r_level && l_level != -1)
		return (1);
	return (0);
}

/**
 *get_level - Calculate level\height of the node
 *@tree: binary tree node
 *@level: the level/depth of the node
 *Return: the level of the node or -1 if not full
 */
int get_level(const binary_tree_t *tree, int level)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (level);

	if (tree->left == NULL || tree->right == NULL)
		return(-1);


	left = get_level(tree->left, level + 1);
	right = get_level(tree->right, level + 1);
	if (left == right && left != -1)
		level = left;
	return (level);
}
