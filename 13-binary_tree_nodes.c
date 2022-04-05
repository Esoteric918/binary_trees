#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: tree to be counted
 * Return: size_t
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t onlyChild = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		onlyChild = 1;
	}
	return (onlyChild + binary_tree_nodes(tree->left)
			+ binary_tree_nodes(tree->right));
}
