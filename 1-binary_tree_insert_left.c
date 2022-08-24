#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node at left arm of node
 * @parent: root
 * @value: data field
 *
 * Return: left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL, *prev_left = NULL;

	if (!parent)
		return (NULL);
	prev_left = parent->left;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	if (!node)
		return (node);

	if (!(parent->left))
	{
		parent->left = node;
		node->parent = parent;
	}
	else
	{
		parent->left = node;
		node->parent = parent;
		node->left = prev_left;
		prev_left->parent = node;
	}

	return (node);
}
