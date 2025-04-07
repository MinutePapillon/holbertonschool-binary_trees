#include "binary_trees.h"

/**
 * binary_tree_size - calculate the number of node of the binary tree
 *
 * @tree: the root of the binary tree
 *
 * Return: the number of node of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t result = 1;

	if (tree == NULL)
		return (0);

	result += binary_tree_size(tree->left);
	result += binary_tree_size(tree->right);

	return (result);
}
