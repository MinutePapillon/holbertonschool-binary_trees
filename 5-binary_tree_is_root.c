#include "binary_trees.h"

/**
 * binary_tree_is_root - test if the node given is the root
 *
 * @node: the node to test
 *
 * Return: 1 if the node is the node overwise return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
		if (node->parent == NULL)
			return (1);
	return (0);
}
