#include "binary_trees.h"
/**
 * is_it_bst - recursive check for BST
 * @node: root of tree being checks
 * @min: minimum value of node
 * @max: maximum value of node
 * Return: true if BST valid else false
 */


bool is_it_bst(const binary_tree_t *node, int min, int max)
{
	if (!node)
		return (true);

	/**
	 * false if left node violates the min/max constraint
	 */
	if (node->left  && (node->left->n >= node->n || node->left->n <= min))
		return (false);

	/**
	 * false if right node violates the min/max constraint
	*/
	if (node->right  && (node->right->n <= node->n || node->right->n >= max))
		return (false);

	/**
	 * otherwise check the subtrees recursively,
		tightening the min or max constraint
	*/
	return (is_it_bst(node->left, min, node->n) &&
			is_it_bst(node->right, node->n, max));
}

/**
 * binary_tree_is_bst- checks if tree is valid BST
 *
 * @tree: tree to be checked
 * Return: 1 if BTS valid else 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_it_bst(tree, INT_MIN, INT_MAX));
}
