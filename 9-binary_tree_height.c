#include "binary_trees.h"

/**
 * verify_height - checks for height of a tree
 * @tree: tree to check
 * @size: initial size
 * Return: computed size
 */
size_t verify_height(const binary_tree_t *tree, size_t size)
{
	size_t start_left = 0, start_right = 0;

	if (!tree)
		return (0);

	start_left = 1 + verify_height(tree->left, size);
	size = start_left;
	start_right = 1 + verify_height(tree->right, size);
	if (start_right > size)
		size = start_right;
	else if (start_left > size)
		size = start_left;
	return (size);
}

/**
 * binary_tree_height - returns the height of a root
 * @tree: root
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size = verify_height(tree, size);

	return (size - 1);
}
