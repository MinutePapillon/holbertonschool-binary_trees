#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that insert a new node at left
 *
 * @parent: the node to add the left child
 * @value: the value of the new node
 *
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = new_node;
		return (new_node);
	}

	new_node->left = parent->left;
	parent->left->parent = new_node;
	new_node->parent = parent;
	parent->left = new_node;

	return (new_node);
}
