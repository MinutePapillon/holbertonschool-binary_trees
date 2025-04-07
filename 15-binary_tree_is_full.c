#include "binary_trees.h"

/**
 * binary_tree_is_full - look to all parents that have 2 child
 *
 * @tree: the root of the binary tree
 *
 * Return: 1 if all parents have 2 child overwise return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int tmp_right, tmp_left;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	tmp_left = binary_tree_is_full(tree->left);
	tmp_right = binary_tree_is_full(tree->right);

	if (tmp_right > tmp_left)
		return (tmp_left);
	else if (tmp_right < tmp_left)
		return (tmp_right);
	return (tmp_right);
}
