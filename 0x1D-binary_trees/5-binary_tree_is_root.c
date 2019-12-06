#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a node is a root
 * @node: node is a pointer to the node to check
 * Return: return 1 if node is a root, otherwise 0
 * If node is NULL, return 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
