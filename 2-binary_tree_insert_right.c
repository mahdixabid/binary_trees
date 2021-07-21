#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the created new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (!parent)
		return (NULL);
	right_node = malloc(sizeof(binary_tree_t));
	if (!right_node)
		return (NULL);
	right_node->n = value;
	right_node->parent = parent;
	right_node->left = NULL;
	right_node->right = parent->right;
	if (parent->right != NULL)
		parent->right->parent = right_node;
	parent->right = right_node;
	return (right_node);
}
