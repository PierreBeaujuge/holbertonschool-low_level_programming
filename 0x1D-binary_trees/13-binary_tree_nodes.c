#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 * in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0, left_count = 0, right_count = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		node_count += 1;
	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->right);
	return (node_count + left_count + right_count);
}
