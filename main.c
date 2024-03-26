#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	int ret;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	binary_tree_print(root);

	ret = binary_tree_is_root(root);
	printf("Is %d a root: %d\n", root->n, ret);
	ret = binary_tree_is_root(root->right);
	printf("Is %d a root: %d\n", root->right->n, ret);
	ret = binary_tree_is_root(root->right->right);
	printf("Is %d a root: %d\n", root->right->right->n, ret);
	return (0);
}
/*
void print_tree(binary_tree_t *root)
{
	print_tree_recur(root, 0);

}

void print_tree_recur(binary_tree_t *root , int level)
{
	if (root == NULL)
	{
		spaces(level);
		return;
	}

	spaces(level);
	printf("Value:(%d)\n", root->n);

	spaces(level);
	printf("Left\n");
	print_tree_recur(root->left, level + 1);
	printf("\n");

	spaces(level);
	printf("Right\n");
	print_tree_recur(root->right, level + 1);

	printf("\n");

}

void spaces(int times)
{
	int n = 0;

	for (;n < times; n++)
	{
		printf("\t");
	}
}
*/
