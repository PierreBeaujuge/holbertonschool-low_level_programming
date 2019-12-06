#include "binary_trees.h"

/**
 * binary_tree_rotate_right - function that performs a right-rotation
 * on a binary tree
 * @tree: a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *left_save = NULL, *parent_save = NULL;

	if (!tree || !tree->left)
		return (NULL);

	parent_save = tree->parent;
	left_save = tree->left;

	tree->left = tree->left->right;
	if (left_save->right)
		left_save->right->parent = tree;
	left_save->right = tree;
	tree->parent = left_save;
	left_save->parent = parent_save;
	return (left_save);
}
