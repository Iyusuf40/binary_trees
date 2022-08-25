#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_leaves - computes the number of leaves in a tree
 * @tree: tree to compute
 * Return: size
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	size += binary_tree_leaves(tree->left);
	size += binary_tree_leaves(tree->right);

	return (size);
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
	int h = 0, res;
	size_t leaves;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	h = height(tree) - 1;
	leaves = binary_tree_leaves(tree);

	res = 2 << (h - 1);

	/*printf("res %d leaves %lu height %d\n", res, leaves, h);*/
	if ((size_t)res == leaves)
		return (1);
	return (0);
}
