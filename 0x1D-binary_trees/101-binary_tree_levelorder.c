#include "binary_trees.h"

queue_t *queue_push(queue_t **queue, const binary_tree_t *node);
binary_tree_t *queue_pop(queue_t **queue);

/**
 * binary_tree_levelorder - function that goes through a binary tree
 * using level-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * Return: n/a
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	queue_t *queue = NULL, *new_node = NULL;
	binary_tree_t *current = NULL;

	if (!tree || !func)
		return;

	new_node = queue_push(&queue, tree);
	if (!new_node)
		return;

	while (queue)
	{
		current = queue_pop(&queue);
		if (current->left)
			queue_push(&queue, current->left);
		if (current->right)
			queue_push(&queue, current->right);
		func(current->n);
	}
}

/**
 * queue_push - function that pushes a binary-tree node
 * in a queue (linked list type)
 * @queue: double pointer to the queue
 * @node: pointer to the binary-tree node to be added to the queue
 * Return: pointer to the added node in the queue, or NULL upon failure
 */

queue_t *queue_push(queue_t **queue, const binary_tree_t *node)
{
	queue_t *new_node = NULL, *temp = NULL;

	if (!queue || !node)
		return (NULL);

	new_node = malloc(sizeof(queue_t));
	if (!new_node)
		return (NULL);
	new_node->node = (binary_tree_t *)node;
	new_node->next = NULL;

	if (!(*queue))
		*queue = new_node;
	else
	{
		temp = *queue;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}

/**
 * queue_pop - function that pops a node
 * in a queue (linked list type)
 * @queue: double pointer to the queue
 * Return: pointer to a binary-tree node, or NULL if the queue is empty
 */

binary_tree_t *queue_pop(queue_t **queue)
{
	binary_tree_t *current = NULL;
	queue_t *temp = NULL;

	if (!queue || !(*queue))
		return (NULL);

	current = (*queue)->node;
	temp = *queue;
	*queue = (*queue)->next;
	free(temp);
	return (current);
}
