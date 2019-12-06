#include "binary_trees.h"
#include <stdbool.h>

int node_count(const binary_tree_t *tree);
bool is_complete(const binary_tree_t *tree, int index, int count);

/**
 * binary_tree_is_complete - function that checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int count = 0, index = 0;

	if (!tree)
		return (0);

	count = node_count(tree);
	if (is_complete(tree, index, count))
		return (1);
	return (0);
}

/**
 * is_complete - function that compares the index number of the node
 * to the overall node count in the binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * @index: node index (incremented by recursion)
 * @count: node count (passed from main)
 * Return: true if complete, false otherwise
 */

bool is_complete(const binary_tree_t *tree, int index, int count)
{
	if (!tree)
		return (true);
	if (index >= count)
		return (false);
	return (is_complete(tree->left, 2 * index + 1, count) &&
		is_complete(tree->right, 2 * index + 2, count));
}

/**
 * node_count - function that counts the number of nodes in the binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes in the binary tree, 0 if the tree is empty
 */

int node_count(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + node_count(tree->left) + node_count(tree->right));
}
