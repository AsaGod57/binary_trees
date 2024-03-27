#include "binary_trees.h"

/**
 * binary_tree_nodes - Starts to count the nodes with at least 1 child
 * @tree: Specifies a pointer to the root node of the tree
 * Return: 0 if tree is NULL, else return node count (Ends)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
