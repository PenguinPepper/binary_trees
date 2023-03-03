#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (leaves += 1);
	return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
