#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_bool = 0, right_bool = 0, left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	if (!tree->left || !tree->right)
		return (0);

	left_bool = binary_tree_is_full(tree->left);
	right_bool = binary_tree_is_full(tree->right);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_bool == right_bool && left_height == right_height)
		return (1);
	return (0);
}

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

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height >= right_height)
		return (left_height + 1);
	return (right_height + 1);
}
