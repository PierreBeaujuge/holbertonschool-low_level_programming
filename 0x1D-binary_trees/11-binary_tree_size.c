#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = 0, size_right = 0;

	if (!tree)
		return (0);
	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	return (1 + size_left + size_right);
}
