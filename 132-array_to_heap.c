#include "binary_trees.h"

/**
 * array_to_heap - Starts to build a Max Binary Heap tree
 * @array: Specifies pointer to the first element of the array
 * @size: Specifies number of elements in the array
 * Return:  A pointer to the root node, or NULL if otherwise
 */
heap_t *array_to_heap(int *array, size_t size)
{
	size_t i;
	heap_t *root = NULL;

	if (!array)
		return (NULL);

	root = heap_insert(&root, array[0]);
	for (i = 1; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
