#include "binary_trees.h"

/**
 * binary_tree_size - Starts to measure the size of a binary tree
 * @tree: Specifies a pointer to the root node of the tree
 * Return: The size of the tree (Ends)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
