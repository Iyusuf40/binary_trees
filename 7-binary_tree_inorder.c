#include "binary_trees.h"

/**
 * binary_tree_inorder - implement inorder traversing
 * @tree: root
 * @func: function to apply to each node's n field
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
