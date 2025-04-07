#include "binary_trees.h"

/**
 * binary_tree_nodes - count the number of node with at least 1 child
 *
 * @tree: the root of the binary tree
 *
 * Return: the number of node with at least 1 child of the binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t result = 1, tmp;

	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);

	tmp = binary_tree_nodes(tree->left);
	if (tree->left != NULL && tree->right != NULL)
	{
		result += tmp;
	}
	tmp = binary_tree_nodes(tree->right);
	if (tree->left != NULL && tree->right != NULL)
	{
		result += tmp;
	}
	return (result);
}
