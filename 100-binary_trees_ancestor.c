#include "binary_trees.h"

/**
 *binary_trees_ancestor - find lowest common ancestor
 *@first: node 1
 *@second: node 2
 *Return: ancestor node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	binary_tree_t *one, *two;
	binary_tree_t *temp;

	one = (binary_tree_t *)first;
	two = (binary_tree_t *)second;
	if (one == second)
		return (one);
	if (check_decendants(one, second) == 1)
		return (one);
	if (check_decendants(two, first) == 1)
		return (two);

	while (one->parent != two->parent)
	{
		if (one == NULL || two == NULL)
			return (NULL);
		temp = find_sibling(one);
		if (temp != NULL && check_decendants(temp, second) == 1)
			return (one->parent);

		temp = find_sibling(two);
		if (temp != NULL && check_decendants(temp, first) == 1)
			return (two->parent);

		one = one->parent;
		two = two->parent;
	}

	return (one->parent);
}

/**
 *find_sibling - find if the node has a sibling
 *@child: the node whos sibling to check
 *Return: sibling node or NULL
 */
binary_tree_t *find_sibling(binary_tree_t *child)
{
	binary_tree_t *mom;

	if (child == NULL || child->parent == NULL)
		return (NULL);

	mom = child->parent;
	if (mom->right == child)
		return (mom->left);
	return (mom->right);
}

/**
 *check_decendants - check if any of the decendants
 *                  of a node are a particular node
 *@node: tree
 *@target: target node
 *Return: ancestor node
 */
int check_decendants(const binary_tree_t *node,
				  const binary_tree_t *target)
{
	int found = 0;

	if (node == NULL)
		return (0);
	if (node->left != NULL && node->left == target)
		return (1);
	if (node->right != NULL && node->right == target)
		return (1);

	found = check_decendants(node->left, target);
	if (found == 0)
		found = check_decendants(node->right, target);
	return (found);
}
