#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is a leaf or not
 *
 * @node: node to be checked
 * Return: 1 if true - 0 if false or if node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
		return (1);
	return (0);
}
