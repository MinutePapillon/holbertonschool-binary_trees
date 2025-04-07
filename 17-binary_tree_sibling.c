#include "binary_trees.h"

/**
 * binary_tree_sibling - look for the sibling of a given node
 *
 * @node: the node to look for his sibling
 *
 * Return: the sibling or NULL if fails
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
		return (0);

	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
}
