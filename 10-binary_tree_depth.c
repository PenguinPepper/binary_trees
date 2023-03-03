#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_depth - function that measures
 * the depth of a node in a binary tree
 *
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t edges = 0;
	binary_tree_t *not_root;

	if (tree == NULL)
		return (0);
	not_root = tree->parent;
	while (not_root)
	{
		edges++;
		not_root = not_root->parent;
	}
	return (edges);
}
