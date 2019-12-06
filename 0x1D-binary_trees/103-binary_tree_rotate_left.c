#include "binary_trees.h"

/**
 * binary_tree_rotate_left - function that performs a left-rotation
 * on a binary tree
 * @tree: a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *right_save = NULL, *parent_save = NULL;

	if (!tree || !tree->right)
		return (NULL);

	parent_save = tree->parent;
	right_save = tree->right;

	tree->right = tree->right->left;
	if (right_save->left)
		right_save->left->parent = tree;
	right_save->left = tree;
	tree->parent = right_save;
	right_save->parent = parent_save;
	return (right_save);
}
