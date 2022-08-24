#include "binary_trees.h"

/**
 * binary_tree_depth - computes the depth of a node in a binary tree
 * @tree: node to get depth
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *current = (binary_tree_t *)tree;

	if (!tree)
		return (0);

	while (current)
	{
		current = current->parent;
		depth++;
	}
	return (depth - 1);
}
