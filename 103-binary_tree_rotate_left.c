#include "binary_trees.h"
/**
  * binary_tree_rotate_left - Performs a left-rotation on a binary tree
  *
  * @tree: Pointer to a tree structure
  * Return: pointer to new node
  */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{

	binary_tree_t *node, *temp;

	if (!tree)
	{
		return (NULL);
	}
	if (tree->right == NULL)
	{
		return (tree);
	}

	node = tree->right;
	node->parent = tree->parent;
	tree->right = NULL;

	if (node->left == NULL)
	{
		node->left = tree;
		tree->parent = node;
		return (node);
	}

	temp = node->left;
	node->left = tree;
	tree->parent = node;
	tree->right = temp;
	temp->parent = tree;



	return (node);

}
