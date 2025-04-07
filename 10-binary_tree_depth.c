#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * @tree: pointer to the node to measure the depth
 *
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		height++;
	}

	return (height);
}
