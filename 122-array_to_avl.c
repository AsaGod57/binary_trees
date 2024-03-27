#include "binary_trees.h"

/**
 * array_to_avl - Starts to build an AVL tree from an array
 * @array: Specifies a pointer to the first element of the array
 * @size: Specifies thhe number of elements in @array
 * Return: A pointer to the root node of the created AVL, or NULL upon failure
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
	size_t i, j;

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] == array[i])
				break;
		}
		if (j == i)
		{
			if (avl_insert(&tree, array[i]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
