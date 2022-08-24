#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node has no children
 *
 * @node: node to check
 *
 * Return: 1 if true otherwise 0
 *
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
