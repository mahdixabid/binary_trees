#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that checks if a given node is a root
 *@node: binary_tree_t
 *
 * Return: 1 if node is a root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent)
		return (0);
	return (1);
}
