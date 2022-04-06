#include "binary_trees.h"

/**
 * binary_tree_sibling - checks if nodes are sibling
 * @node: node being checked
 * Return: NULL if Parent NULL & NULL if no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
