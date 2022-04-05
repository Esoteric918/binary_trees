#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: tree to be measured
 * Return: nDepth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t nDepth = 0;

	if (!tree)
		return (0);

	for (; tree->parent; tree = tree->parent, ++nDepth)
	;
	return (nDepth);
}
