#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 *
 * @tree: tree to be traversed
 * @func: pointer to a function to call for each tree
 *
 * Return: nothing if NULL
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{


	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	/* then recur on left subtree */
	binary_tree_preorder(tree->left, func);

	/* now recur on right subtree */
	binary_tree_preorder(tree->right, func);

}
