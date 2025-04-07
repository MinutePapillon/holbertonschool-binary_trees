#include "binary_trees.h"

/**
 * binary_tree_inorder - pass throught the tree in inorder
 *
 * @tree: the root of the tree
 * @func: the function use to print the value
 *
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			func(tree->n);
			return;
		}
		if (tree->left != NULL)
		{
			binary_tree_inorder(tree->left, func);
		}
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
