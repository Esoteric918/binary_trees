#include "binary_trees.h"
/**
 * @brief
 *
 */

int binary_tree_is_bst(const binary_tree_t *tree) {
    if (!tree)
        return (0);
        /* false if left is > than node */
    if (tree->left && tree->left->n >= tree->n)
        return (0);
        /* false if left is < than node */
    if (tree->right && tree->right->n <= tree->n)
        return (0);
     /* false if, recursively, the left or right is not a BST */
    if (!binary_tree_is_bst(tree->left) || !binary_tree_is_bst(tree->right))
        return 0;

    /* passing all that, it's a BST */
    return 1;
}
