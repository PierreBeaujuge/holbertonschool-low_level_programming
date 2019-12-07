#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that finds the
 * lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: a pointer to the lowest common ancestor node
 * If no common ancestor was found, your function must return NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *root = NULL, *lc_ancestor = NULL;

	if (!first || !second)
		return (NULL);
	root = find_tree_root(first);
	lc_ancestor = search_lc_ancestor(root, first, second);
	if (!lc_ancestor)
		return (NULL);
	return ((binary_tree_t *)lc_ancestor);
}

/**
 * search_lc_ancestor - function that finds the
 * lowest common ancestor of two nodes starting with tree root
 * @root: root of the tree
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: a pointer to the lowest common ancestor node
 * If no common ancestor was found, your function must return NULL
 */

binary_tree_t *search_lc_ancestor(const binary_tree_t *root,
				  const binary_tree_t *first,
				  const binary_tree_t *second)
{
	const binary_tree_t *left_search = NULL, *right_search = NULL;

	if (root == NULL)
		return (NULL);
	if (root->n == first->n || root->n == second->n)
		return ((binary_tree_t *)root);
	left_search = search_lc_ancestor(root->left, first, second);
	right_search = search_lc_ancestor(root->right, first, second);
	if (left_search == NULL)
		return ((binary_tree_t *)right_search);
	if (right_search == NULL)
		return ((binary_tree_t *)left_search);
	return ((binary_tree_t *)root);
}

/**
 * find_tree_root - helper function that finds the root of a tree
 * given a node pointer
 * @node: pointer to the node from which the root of the tree must be found
 * Return: pointer to the root of the tree, or NULL if it was not found
 */

binary_tree_t *find_tree_root(const binary_tree_t *node)
{
	if (!node)
		return (NULL);
	while (node)
	{
		if (binary_tree_is_root(node) == 1)
			return ((binary_tree_t *)node);
		node = node->parent;
	}
	return (NULL);
}

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
