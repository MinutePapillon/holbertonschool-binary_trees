#include "binary_trees.h"

/**
 * binary_tree_uncle - look for the uncle of a given node
 *
 * @node: the node to look for is uncle
 *
 * Return: the Uncle or NULL if fails
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (0);

	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
