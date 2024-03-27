#include "binary_trees.h"

unsigned char is_leaf(const binary_tree_t *node);
size_t depth(const binary_tree_t *tree);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * is_leaf - Starts to check if a node is a leaf of a bin tree
 * @node: Specifies a pointer to the node to check
 * Return: 1 if the node is a leaf,or 0 if otherwise
 */
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - Starts to return the depth of a given node
 * @tree: Specifies a pointer to the node to measure
 * Return: The depth of node (Ends)
 */
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - Starts to return a leaf of a binary tree
 * @tree: Specifies a pointer to the root node of the tree
 * Return: A pointer to the first encountered leaf (Ends)
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recursive - Starts to checks if a binary tree is perfect
 * @tree: Specifies a pointer to the root node of the tree to check
 * @leaf_depth: Specifies the depth of one leaf in the binary tree
 * @level: Specifies level of current node
 * Return: 1 if the tree is perfect or 0 if otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
		is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - Starts to check if a binary tree is perfect
 * @tree: Specifies a pointer to the root node of the tree
 * Return: 0 if tree is NULL or not perfect, or 1 if otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}
