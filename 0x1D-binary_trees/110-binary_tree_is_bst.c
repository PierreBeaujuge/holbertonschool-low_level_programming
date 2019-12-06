#include "binary_trees.h"

int is_subtree_lesser(const binary_tree_t *tree, int data);
int is_subtree_greater(const binary_tree_t *tree, int data);

/**
 * binary_tree_is_bst - function that checks if a binary tree
 * is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if tree is a valid BST, and 0 otherwise
 * If tree is NULL, return 0
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if (is_subtree_lesser(tree->left, tree->n)
	    && is_subtree_greater(tree->right, tree->n)
	    && binary_tree_is_bst(tree->left)
	    && binary_tree_is_bst(tree->right))
		return (1);
	return (0);
}

/**
 * is_subtree_lesser - function that checks that the n value of the subtree
 * root is lesser than the n value of the parent node of the subtree root
 * @tree: a pointer to the root node of the tree to check
 * @data: n value of parent root of the subtree root
 * Return: 1 if subtree verifies these conditions, and 0 otherwise
 */

int is_subtree_lesser(const binary_tree_t *tree, int data)
{
	if (!tree)
		return (1);
	if (tree->n < data
	    && is_subtree_lesser(tree->left, data)
	    && is_subtree_lesser(tree->right, data))
		return (1);
	return (0);
}

/**
 * is_subtree_greater - function that checks that the n value of the subtree
 * root is lesser than the n value of the parent node of the subtree root
 * @tree: a pointer to the root node of the tree to check
 * @data: n value of parent root of the subtree root
 * Return: 1 if subtree verifies these conditions, and 0 otherwise
 */

int is_subtree_greater(const binary_tree_t *tree, int data)
{
	if (!tree)
		return (1);
	if (tree->n > data
	    && is_subtree_greater(tree->left, data)
	    && is_subtree_greater(tree->right, data))
		return (1);
	return (0);
}
