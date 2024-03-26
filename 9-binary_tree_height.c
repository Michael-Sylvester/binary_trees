#include "binary_trees.h"

/**
 *binary_tree_height - Calculate the hieght of the tree
 *@tree: binary tree to be deleted
 *Return: nothing
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0;
	size_t rheight = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		lheight += 1;
		lheight += binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		rheight += 1;
		rheight += binary_tree_height(tree->right);
	}
	
	if (lheight > rheight)
		return (lheight);
	else
		return (rheight);
}
