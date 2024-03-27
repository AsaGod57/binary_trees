#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Starts to check if a node is a leaf
 * @node: Specifies a  pointer to the node to check
 * Return: 1 if the node is a leaf or 0 if otherwise (Ends)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
