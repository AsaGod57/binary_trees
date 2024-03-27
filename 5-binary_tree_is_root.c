#include "binary_trees.h"

/**
 * binary_tree_is_root - Starts to check if a node is a root
 * @node: Specifies a pointer to the node to check
 * Return: 1 if the node is a root or 0 if otherwise (Ends)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
