#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - function that measures the size of a binary tree
 *
 * @tree:  pointer to the root node of the tree to measure the size
 *
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t num_nodes = 1;
	binary_tree_t *not_leaf, *not_rileaf;

	if (tree == NULL)
		return (0);
	not_leaf = tree->left;
	while (not_leaf)
	{
		num_nodes++;
		not_leaf = not_leaf->left;
	}
	not_rileaf = tree->right;
	while (not_rileaf)
	{
		num_nodes++;
		not_rileaf = not_rileaf->right;
	}
	return (num_nodes);
}
