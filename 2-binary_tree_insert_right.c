#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node at right arm of node
 * @parent: root
 * @value: data field
 *
 * Return: left node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL, *prev_right = NULL;

	if (!parent)
		return (NULL);
	prev_right = parent->right;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	if (!node)
		return (node);

	if (!(parent->right))
	{
		parent->right = node;
		node->parent = parent;
	}
	else
	{
		parent->right = node;
		node->parent = parent;
		node->right = prev_right;
		prev_right->parent = node;
	}

	return (node);
}
