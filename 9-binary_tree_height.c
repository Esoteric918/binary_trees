#include "binary_trees.h"
/**
 * binary_tree_height -measures the height of a binary tree
 * @tree: tree to be messured by height
 *
 * Return: 0 if invalid or node if success
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lDepth, rDepth;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	else
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
