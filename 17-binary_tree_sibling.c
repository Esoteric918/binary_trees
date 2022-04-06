#include "binary_trees.h"

/**
 * binary_node_sibling - checks if nodes are sibling
 * @node: node being checked
 * Return: NULL if Parent NULL & NULL if no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int level = 0;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	while (node->parent->right == node ||
			(node->parent->right == NULL &&
				node->parent->left == node))
	{
		if (node->parent == NULL
			|| node->parent->parent == NULL)
			return (NULL);
		node = node->parent;
		level--;
	}
	node = node->parent->right;

	if (node == NULL)
		return (NULL);
	while (level < 0)
	{
		/* Iterate through subtree */
		if (node->left != NULL)
			node = node->left;
		else if (node->right != NULL)
			node = node->right;
		else
			/* if no child are there, we cannot have right sibling in this path*/
			break;
		level++;
	}
	/* reset */
	if (level == 0)
		return (node);

	return (binary_tree_sibling(node));
}
