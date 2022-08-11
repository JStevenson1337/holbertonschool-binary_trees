#include "binary_trees.h"
/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * 
 * @tree: pointer to the root node of the tree 
 * @return: return 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree || tree == NULL)
		return 0;

	while (tree->left != NULL)
		tree = tree->left;
	while (tree->right != NULL)
		tree = tree->right;
	return (binary_tree_is_bst_rec(tree, INT_MIN, INT_MAX));
}

/**
 * binary_tree_is_bst_rec - checks if a binary tree is a valid Binary Search Tree
 * 
 * @tree: pointer to the root node of the tree 
 * @min: minimum value of the BST
 * @max: maximum value of the BST
 * @return: return 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst_rec(const binary_tree_t *tree, int min, int max)
{
	if (!tree || tree == NULL)
		return 1;
	if (tree->n < min || tree->n > max)
		return 0;
	return (binary_tree_is_bst_rec(tree->left, min, tree->n - 1) &&
		binary_tree_is_bst_rec(tree->right, tree->n + 1, max));
}

