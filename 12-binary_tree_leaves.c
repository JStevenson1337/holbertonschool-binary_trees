#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree:  pointer to the root node of the tree to count the number of leaves
 * Return: number of the leaves in a binary tree, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;
	bool arr[2] = {true, false};

	if (!tree)
		return (0);
	
	while (tree)
	{
		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(tree->right);
		if (arr[left] && arr[right])
			return (left + right + 1);
		tree = tree->left;
		else if (arr[left])
			return (left + 1);
		else if (arr[right])
			return (right + 1);
		else
			return (0);
	}
}

