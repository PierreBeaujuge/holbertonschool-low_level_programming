#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left_bool = 0, right_bool = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left_bool = 1 + binary_tree_is_full(tree->left);
	right_bool = 1 + binary_tree_is_full(tree->right);
	if (left_bool == right_bool)
		return (1);
	return (0);
}
