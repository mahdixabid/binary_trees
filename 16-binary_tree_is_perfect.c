#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 *@tree: binary_tree_t
 *
 * Return: Longest side
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right = binary_tree_height(tree->right) + 1;
	if (left > right)
		return (left);
	else
		return (right);
}

/**
 * exp_power - find the power of 2
 *@p: how many number is passing in
 * Return: number
 */
int exp_power(int p)
{
	int i = 0;
	int number = 1;

	for (i = 0; i < p; i++)
		number = number * 2;
	return (number);
}

/**
 * binary_tree_size - measures the size of a binary tree
 *@tree: binary_tree_t
 *
 * Return: 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else
		return (binary_tree_size(tree->left) + 1
				+ binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 *@tree: pointer to the root node of the tree to check
 *
 * Return: 0 if NULL or not perfect else return 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t n;
	size_t h;
	size_t p;

	if (tree == NULL)
		return (0);
	n = binary_tree_size(tree);
	h = binary_tree_height(tree);
	p = exp_power(h + 1) - 1;
	return (n == p);
}
