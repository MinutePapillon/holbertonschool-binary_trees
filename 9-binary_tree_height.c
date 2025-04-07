#include "binary_trees.h"

/**
 * binary_tree_height - function that calculate the height of a binary tree
 *
 * @tree: the root of the binary tree
 *
 * Return: the height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t res, test;

	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);

	res = binary_tree_height(tree->left);
	test = binary_tree_height(tree->right);

	if (test > res)
		return (++test);
	return (++res);

}
