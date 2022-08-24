#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if tree is full
 * @tree: tree to check
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int res = 1;

	if (!tree)
		return (0);

	if (!tree->left || !tree->right)
		res += 1;

	res += binary_tree_is_full(tree->left);
	res += binary_tree_is_full(tree->right);
	if (res > 1)
		return (0);
	return (1);
}
