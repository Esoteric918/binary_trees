#include "binary_trees.h"
/* Calculate the depth */
/**
 * getDepth - Get the Depth object
 *
 * @tree: tree being measured
 * Return: int
 */
int getDepth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree)
	{
		d++;
		tree = (tree->left);
	}
	return (d);
}
/* Check if the tree is perfect */
/**
 * isPerfect - check L and R of tree
 *
 * @tree: - tree to be measured
 * @d: depth of tree
 * @level: level of tree
 * Return: true/false
 */
bool isPerfect(const binary_tree_t *tree, int d, int level)
{
	/* Check if the tree is empty */
	if (!tree)
	return (true);

  /* Check the presence of children */
	if (!tree->left && !tree->right)
	return (d == level + 1);

	if (!tree->left || !tree->right)
	return (false);

	return (isPerfect(tree->left, d, level + 1) &&
			isPerfect(tree->right, d, level + 1));
}
/**
 * binary_tree_is_perfect - rec call checks if tree is perfect
 *@tree: tree measured
 *Return: 0 if tree NULL 1 if Success
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = getDepth(tree);

	if (!(tree))
		return (0);
	return (isPerfect(tree, d, 0));
}
