#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left_count = binary_tree_leaves(tree->left);
	right_count = binary_tree_leaves(tree->right);
	return (left_count + right_count);
}
