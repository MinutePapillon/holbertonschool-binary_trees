#include "binary_trees.h"

/**
 * binary_tree_height - function that returns the height of a tree
 * @tree: pointer to the root
 * Return: the height of the tree, 0 otherwise
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left >= right)
		return (left + 1);
	else
		return (right + 1);
}

/**
 * binary_tree_balance - function to count the balance left to right
 * @tree: pointer nodes
 * Return: difference balance
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = binary_tree_height(tree->left);

	else
		left = -1;

	if (tree->right)
		right = binary_tree_height(tree->right);

	else
		right = -1;

	return (left - right);
}
