#include "binary_trees.h"

/**
 * binary_tree_insert_left - Starts to insert a node as a left-child
 * @parent: Specifies a pointer to the node to insert the left-child in.
 * @value: Specifies the value to store in the new node
 * Return: If parent is NULL or an error occurs - NULL
 *         Otherwise - a pointer to the new node (Ends)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}