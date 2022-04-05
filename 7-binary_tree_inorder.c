#include "binary_trees.h"
/**
 * binary_tree_inorder - treversal of tree in-order
 * @tree: tree to be gone through
 * @func: pointer to a functional call for each tree
 *
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;


	 /* first recur on left child */
	binary_tree_inorder(tree->left, func);

	func(tree->n);

	 /* now recur on right child */
	binary_tree_inorder(tree->right, func);
}
