#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a tree
 * @tree: tree to delete
 *
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/*binary_tree_t *left, *right;*/

	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
