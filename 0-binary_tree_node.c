#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: root node
 * @value: data field
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL, *root = parent;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->parent = root;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	return (node);
}
