#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of a node
 *@node: pointer to the node to find the sibling
 *
 * Return: NULL if node or parent is NULL else return the value of its sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->right)
		return (node->parent->left);
	else
		return (node->parent->right);
}
