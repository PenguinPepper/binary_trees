#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree:  pointer to the root node of the tree to measure the height.
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_edge = 0, right_edge = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
	{
		right_edge++;
		if (tree->right->left != NULL && tree->right->right != NULL)
			binary_tree_height(tree->right);
	}
	if (tree->left)
	{
		left_edge++;
		if (tree->left->left != NULL && tree->left->right != NULL)
			binary_tree_height(tree->left);
	}
	if (left_edge < right_edge)
		return (right_edge);
	else
		return (left_edge);
}
