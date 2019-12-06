#include "binary_trees.h"

int is_bst(const binary_tree_t *tree, int *data);

/**
 * binary_tree_is_bst - function that checks if a binary tree
 * is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if tree is a valid BST, and 0 otherwise
 * If tree is NULL, return 0
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	int *data = NULL;
	int result = 0;

	if (!tree)
		return (0);
	data = malloc(sizeof(int));
	if (!data)
		return (0);
	*data = INT_MIN;
	result = is_bst(tree, data);
	free (data);
	return (result);
}

/**
 * is_bst - function that checks if a binary tree
 * is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 * @data: n value of root passed from main
 * Return: 1 if tree is a valid BST, and 0 otherwise
 * If tree is NULL, return 0
 */

int is_bst(const binary_tree_t *tree, int *data)
{
	if (!tree)
		return (0);
	if (tree->left->n < tree->n && tree->right->n > tree->n)
		if ((!tree->left->left ||
		     (tree->left->left && tree->left->left->n < *data))
		    && (!tree->left->right ||
			(tree->left->right && tree->left->right->n < *data))
		    && (!tree->right->left ||
			(tree->right->left && tree->right->left->n > *data))
		    && (!tree->right->right ||
			(tree->right->right && tree->right->right->n > *data)))
		return (1);
	*data = tree->n;
	is_bst(tree->left, data);
	is_bst(tree->right, data);
	return (0);
}
