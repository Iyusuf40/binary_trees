#include "binary_trees.h"

/**
 * binary_tree_preorder - implement preorder traversing
 * @tree: root
 * @func: function to apply to each node's n field
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
