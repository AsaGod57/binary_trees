#include "binary_trees.h"

/**
 * binary_tree_insert_right - Starts to insert a node as the right-child
 * @parent: Specifies a pointer to the node to insert the right-child
 * @value: Specifies the value to store in the new node
 * Return: If parent is NULL or an error occurs - NULL
 *         Otherwise - a pointer to the new node (Ends)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
