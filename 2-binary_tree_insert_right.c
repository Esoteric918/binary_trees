	#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts new node on right child
 * @parent: parent on binary tree
 * @value: value stored in new node
 * Return: NULL if invalid or node on Success
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);

	if (parent->right)
		parent->right->parent = node;

	node->n = value;
	node->right = parent->right;
	parent->right = node;
	return (node);
}
