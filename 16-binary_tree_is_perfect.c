#include "binary_trees.h"

/**
 * binary_tree_height - function that returns the height of a tree
 * @tree: pointer to the root
 * Return: the height of the tree, 0 otherwise
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left >= right)
		return (left + 1);
	else
		return (right + 1);
}

/**
 * binary_tree_is_perfect - function to check if tree is perfect or not
 * @tree: pointer to the root node
 * Return: 1 if it success or 0 otherwise
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;
	int perfect_right = 0, perfect_left = 0;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left != right)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		perfect_left = binary_tree_is_perfect(tree->left);
		perfect_right = binary_tree_is_perfect(tree->right);
		return (perfect_left && perfect_right);
	}
	return (0);
}
