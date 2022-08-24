#include "binary_trees.h"

/**
 * binary_tree_nodes - computes the number of non_leave nodes in a tree
 * @tree: tree to compute
 * Return: count
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		size++;

	size += binary_tree_nodes(tree->left);
	size += binary_tree_nodes(tree->right);

	return (size);
}
