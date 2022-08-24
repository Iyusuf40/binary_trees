#include "binary_trees.h"
#include <stdio.h>

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
 * height - computes height of a node
 * @tree: node
 * Return: height of left side
 */
int height(const binary_tree_t *tree)
{
	int count = 0, r_count = 0;

	if (!tree)
		return (0);

	count += 1 + height(tree->left);
	r_count += 1 + height(tree->right);
	if (r_count > count)
		count = r_count;
	return (count);
}

/**
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: node to compute balance factor of
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int res = 0;

	if (!tree)
		return (0);
	res += is_full(tree);
	res += height(tree->left) - height(tree->right);
	res += binary_tree_is_perfect(tree->left);
	res += binary_tree_is_perfect(tree->left);
	if (res)
		return (0);
	return (1);
}
