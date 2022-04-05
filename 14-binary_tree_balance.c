#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: tree to be measured
 * Return: Balance tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = binary_tree_height(tree->left);
	if (tree->right)
		right = binary_tree_height(tree->right);

	return (left - right);
}

/**
 * binary_tree_height -measures the height of a binary tree
 * @tree: tree to be messured by height
 *
 * Return: 0 if invalid or node if success
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lDepth, rDepth;

	if (!tree)
		return (0);

	{
		/* compute the depth of each subtree */
		lDepth = binary_tree_height(tree->left);
		rDepth = binary_tree_height(tree->right);

		/* use the larger one */
		if (lDepth > rDepth)
			return (lDepth + 1);
		else
			return (rDepth + 1);
	}
}
