#include "binary_trees.h"

/**
 * binary_tree_insert_right- function that insert a new node at right
 *
 * @parent: the node to add the right child
 * @value: the value of the new node
 *
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	if (parent == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right == NULL)
	{
		new_node->parent = parent;
		parent->right = new_node;
		return (new_node);
	}

	new_node->right = parent->right;
	parent->right->parent = new_node;
	new_node->parent = parent;
	parent->right = new_node;

	return (new_node);
}
