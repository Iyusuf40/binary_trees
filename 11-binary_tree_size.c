#include "binary_trees.h"

/**
 * binary_tree_size - computes the size of a tree
 * @tree: tree to compute
 * Return: size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size += 1 + binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size);
}
