#include "binary_trees.h"
/**
 * binary_tree_height -measures the height of a binary tree
 * @tree: tree to be messured by height
 *
 * Return: 0 if invalid or node if success
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lHeight, rHeight;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	{
		/* compute the Height of each subtree */
		lHeight = binary_tree_height(tree->left);
		rHeight = binary_tree_height(tree->right);

		/* use the larger one */
		if (lHeight > rHeight)
			return (lHeight + 1);
		else
			return (rHeight + 1);
	}
}
