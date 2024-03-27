#include "binary_trees.h"
#include "limits.h"

/**
 * is_bst_helper - Starts to check if a binary tree is a valid binary
 * @tree: Specifies a pointer to the root node
 * @lo: Specifies the value of the smallest node
 * @hi: Specifies the value of the largest node
 * Return: 1 if the tree is a valid BST,or 0 if otherwise
 */
int is_bst_helper(const binary_tree_t *tree, int lo, int hi)
{
	if (tree != NULL)
	{
		if (tree->n < lo || tree->n > hi)
			return (0);
		return (is_bst_helper(tree->left, lo, tree->n - 1) &&
			is_bst_helper(tree->right, tree->n + 1, hi));
	}
	return (1);
}

/**
 * binary_tree_is_bst - Starts to check if a binary tree is a valid binary
 * @tree: Specifies a pointer to the root node of the tree
 * Return: 1 if tree is a valid BST, or 0 if otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
