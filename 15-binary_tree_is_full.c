#include "binary_trees.h"

/**
 * is_full - checks if tree is full
 *
 * @tree: tree to check
 * Return: result sum
 */
int is_full(const binary_tree_t *tree)
{
	int res = 0;

	if (!tree)
		return (0);
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		return (1);

	res += is_full(tree->left);
	res += is_full(tree->right);
	return (res);
}

/**
 * binary_tree_is_full - checks if tree is full
 * @tree: tree to check
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int res = 0;

	if (!tree)
		return (0);
	res = is_full(tree);

	if (res)
		return (0);
	return (1);
}
