#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - function that inserts
 * a node as the left-child of another node.
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node.
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *lefty;

	if (new_node == NULL || value == '\0')
		return (NULL);
	if (parent == NULL)
		return (NULL);

	new_node->parent = parent;
	if (parent->left == NULL)
	{
		parent->left = new_node;
		new_node->left = NULL;
	}
	else
	{
		lefty = parent->left;
		new_node->left = lefty;
		lefty->parent = new_node;
		parent->left = new_node;
	}

	new_node->right = NULL;
	new_node->n = value;

	return (new_node);
}
