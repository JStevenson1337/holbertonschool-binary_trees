#include "binary_trees.h"
/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * 
 * @tree: pointer to the root node of the tree 
 * @return: return 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if (tree->left != NULL)
	{
		if (tree->n < tree->left->n)
			return (0);
		if (!binary_tree_is_bst(tree->left))
			return (0);
	}
	if (tree->right != NULL)
	{
		if (tree->n > tree->right->n)
			return (0);
		if (!binary_tree_is_bst(tree->right))
			return (0);
	}
	return (1);
}
