#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - function that
 * inserts a node as the right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *righty;

	if (new_node == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	if (parent->right == NULL)
	{
		parent->right = new_node;
		new_node->right = NULL;
	}
	else
	{
		righty = parent->right;
		new_node->right = righty;
		righty->parent = new_node;
		parent->right = new_node;
	}

	return (new_node);
}
