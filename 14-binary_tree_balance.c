#include "binary_trees.h"
#include <stdio.h>

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
	/*printf("%d  %d\n", count, r_count);*/
	if (r_count > count)
		count = r_count;
	return (count);
}

/**
 * binary_tree_balance - computes balance factor of a node
 * @tree: node to compute balance factor of
 * Return: factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (height(tree->left) - height(tree->right));
}
