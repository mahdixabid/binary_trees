#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 *@node: pointer to the node to find the uncle
 *
 * Return: NULL if node is NULL or had no uncle, else return its uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL
		|| node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}
