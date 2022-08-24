#include "binary_trees.h"

/**
 * binary_tree_sibling - gets the sibling of node
 * @node: node to check
 * Return: sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (node->parent)
	{
		if ((node->parent)->right != node)
			return ((node->parent)->right);
		return ((node->parent)->left);
	}
	return (NULL);
}
