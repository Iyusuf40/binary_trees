#include "binary_trees.h"

/**
 * binary_tree_postorder - implement postorder traversing
 * @tree: root
 * @func: function to apply to each node's n field
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
