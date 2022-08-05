#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree:  pointer to the root node of the tree to count the number of leaves
 * Return: number of the leaves in a binary tree, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	
	while (tree)
	{
		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(tree->right);
		if (!tree->left && !tree->right)
			return (left + right + 1);
		tree = tree->left;
	}
	return (0);
}

