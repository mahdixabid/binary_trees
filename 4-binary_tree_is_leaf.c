#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 *@node: binary_tree_t
 *
 * Return: 1 if Node is a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left || node->right)
		return (0);
	return (1);
}
